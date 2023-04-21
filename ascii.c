#include<stdio.h>
int main()
{
    char ch;
    printf("Please enter a letter:");
    scanf("%c",&ch);
    int b=ch;
    b=b*2;
    printf("The corresonding ASCII code of %ch multiplied by 2 is %d",ch,b);
}