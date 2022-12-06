#include<stdio.h>
int main()
{
    int n;
    
    do
    {
        printf("enter the number\n");
         scanf("%d",&n);
       printf("%d\n",n);
       if(n%2==1)
       {
        break;
       }
    } while (1);
    
}