#include <stdio.h>
#include <string.h>

int main() {
    int r, s, a;
    printf("Enter the age of Ram: ");
    scanf("%d", &r);
    printf("Enter the age of Shyam: ");
    scanf("%d", &s);
    printf("Enter the age of Ajay: ");
    scanf("%d", &a);

    int young = 0;
    char name[20]; // Array to store the name of the youngest person

    if (r < s && r < a) {
        young = r;
        strcpy(name, "Ram");
    } else if (s < r && s < a) {
        young = s;
        strcpy(name, "Shyam");
    } else if(a<r && a<s) {
        young = a;
        strcpy(name, "Ajay");
    }
    else
        printf("They all OR two of the youngest have same age");


    if(young != 0)
        printf("The youngest is %s whose age is %d\n", name, young);

    // My Other Method
    // if(r<s && r<a)
    //     printf("The youngest is Ram whose age is %d",r);
    // else if(s<r && s<a)
    //     printf("The youngest is Shyam whose age is %d",s);
    // else if(a<r && a<s)
    //     printf("The youngest is Ajay whose age is %d",a);
    // else
    //     printf("They all OR two of the youngest have same age");

    return 0;
}
    