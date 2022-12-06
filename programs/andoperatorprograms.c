#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers\n");
    scanf("%d %d",&a,&b);
    if(a>=b&&b<=a)
    {
        printf("it is good number");
    }
        else{
            printf("it is not a good number\n");
        }
    
}