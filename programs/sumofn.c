#include<stdio.h>
int main()
{
    int n,i,sum=0,j;
    printf("enter the number\n");
    scanf("%d",&n);
    for(i=1,j=n;i<=n,j>=1;i++,j--){
       sum=sum+i;

printf("%d\n",j);
    }
    printf("%d\n",sum);
     //for(int i=n;i>=1;i--){
       // printf("%d\n",i);
    // }
}