#include <stdio.h>

struct customer {
    int accno;
    char name[30];
    float balance;
};

struct trans {
    int accno;
    char trans_type;
    float amount;
};

int main() {
    FILE *customerFile, *transactionFile;
    struct customer cust;
    struct trans transaction;

    customerFile = fopen("CUSTOMER.DAT", "r+");
    if (customerFile == NULL) {
        printf("Error opening CUSTOMER.DAT file.");
        return 1;
    }

    transactionFile = fopen("TRANSACTIONS.DAT", "rb");
    if (transactionFile == NULL) {
        printf("Error opening TRANSACTIONS.DAT file.");
        fclose(customerFile);
        return 1;
    }

    while (fread(&transaction, sizeof(struct trans), 1, transactionFile) == 1) {
        fseek(customerFile, 0, SEEK_SET); // Reset file pointer to the beginning

        while (fread(&cust, sizeof(struct customer), 1, customerFile) == 1) {
            if (transaction.accno == cust.accno) {
                if (transaction.trans_type == 'D') {
                    cust.balance += transaction.amount;
                } else if (transaction.trans_type == 'W') {
                    if (cust.balance - transaction.amount >= 100.0) {
                        cust.balance -= transaction.amount;
                    } else {
                        printf("Account %d: Insufficient funds for withdrawal.\n", cust.accno);
                    }
                }

                fseek(customerFile, -sizeof(struct customer), SEEK_CUR);
                fwrite(&cust, sizeof(struct customer), 1, customerFile);
                break; // Break from inner loop after updating balance for matched accno
            }
        }
    }

    fclose(customerFile);
    fclose(transactionFile);

    return 0;
}
