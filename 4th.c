#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first=8;
    int second=8;
    int sum;
    FILE *p;

    p = fopen("zxc.txt","a+");

    fseek(p , 0 , SEEK_SET);
    fscanf(p,"%d",&first);

    fseek(p , 2 , SEEK_SET);
    fscanf(p,"%d",&second);

    sum = first + second;

    fprintf(p ,"%d" , sum);

    fclose(p);

    printf("%d\n", first);
    printf("%d\n", second);
    printf("%d", sum);

    return 0;
}
