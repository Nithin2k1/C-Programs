#include<stdio.h>
int main()
{
    int n,c;
    printf("Enter the number of rows\n");
    scanf("%d",&n);
    printf("Enter the number of columns\n");
    scanf("%d",&c);
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<c;j++)
        {
              printf("*");
        }
   printf("\n");
    }

    

}