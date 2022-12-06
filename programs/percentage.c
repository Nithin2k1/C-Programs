#include<stdio.h>
int main()
{
  float p;
   printf("enter the percentage\n");
 scanf("%f",&p);
   if(p>=90)
   {
      printf("%f S\n",p);
   }
if(p>=80)
   {
      printf("%f A\n",p);
   }
   if(p>=70)
   {
      printf("%f B\n",p);
   }
   if(p>=60)
   {
      printf("%f C\n",p);
   }
   if(p>=40)
   {
      printf("%f D \n",p);
   }
   if(p<40)
   {
      printf("%f E\n",p);
   }
   else{
      printf("invalid input\n");
   }
}