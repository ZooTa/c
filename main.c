#include <stdio.h>

int main() {
    printf("how much dollars do you have ?");
    double pound  = 15.67; //This Price for 8/11/2020
    double dollar;
    scanf("%lf", &dollar);
    double result = pound * dollar;
    printf("you have %.2lf pound", result);
    return 0;
    }
