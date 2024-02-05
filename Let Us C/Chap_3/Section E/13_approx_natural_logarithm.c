// More- Convinient Short method
#include<stdio.h>
#include<math.h>

int main(){
    int count;
    double x, result = 0;
    printf("Enter the value of x : ");
    scanf("%lf", &x);

    for(count = 1; count <= 7; count ++){
        if(count == 1)
            result += (x - 1) / x ;
        else{
            result += pow((x - 1) / x , count) / 2 ;
        }
    }
    printf("Sum of first 7 terms of natural-log(approx) = %lf", result);
    return 0;
}

// My-Way
// #include<stdio.h>
// #include<math.h> //because we have to use pow function
// int main()
// {
//     double x, term, series, result = 0;
//     printf("Enter the value of x: ");
//     scanf("%lf", &x);
//     term = (x-1)/x;
//     //for-loop for seven terms loop will start from second term because first is already assigned via d=(x-1)/x
//     for(int i=2; i<=7 ; i++)
//     {
//         series = pow(term, i) / 2; // Directly divided the pow series
//         result += series ;
//     }

//     result = term + result; // Now add first term
//     // printf("Result: %lf",res);
//     printf("Sum of first-7 terms of natural-log series is %lf", result);
//     return 0;
// }