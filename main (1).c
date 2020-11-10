/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int number, y, sum = 0, x;
 
    printf("enter the number you want to check\n");
    scanf("%d", &number);
    for (x = 1; x < number; x++)
    {
        y = number % x;
	if (y == 0)
        {
            sum = sum + x;
        }
    }
    if (sum == number)
        printf("%d is perfect number",number);
    else
        printf("%d is not a perfect number",number);
    return 0;
}    