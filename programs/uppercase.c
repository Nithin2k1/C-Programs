#include<stdio.h>
int main()
{
    char s;
    printf("enter the charachter\n");
    scanf("%c",&s);
    if(s>='a'&&s<='z')
    {
        printf("lowercase\n");
    }
    else if(s>='A'&&s<='Z')
    {
        printf("uppercase\n");

    }
else {
    printf("invalid character\n");
}
    }
