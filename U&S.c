/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum(int arr[]) 
{ 
    int sum = 0,i;
    for(i = 0 ;i <= 19 ;i++ ){
        sum = sum + arr[i] ;
    }
    return sum; 
} 


int main()
{
    int arr[20]= {},i,x,y,n,num; 
    
    printf("enter the numbers\n");
    
    for(i = 0 ;i <= 19 ;i++ ) {
        y = 0;
        scanf("%d",&num);
        
        for(x = 0 ; x < i; x++){
            if (num == arr[x]){
                y = 1;
            }
        }
        if (y == 1){
            continue;
        }
         arr[i] = num;
    }
    printf("the unique valies are : ");
    for(i = 0 ;i <= 19 ;i++ ){
        n = 0;
        for(x = 0 ; x < i; x++){
            if (arr[i] == arr[x]){
                n = 1;
            }
        }
        if (n == 1){
            continue;
        }
        printf("%d ",arr[i]);
    }
    printf("\nthe sum of the values is : ");
    printf("%d ", sum(arr));
    return 0;
}



