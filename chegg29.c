#include<stdio.h>
void rotateOnePosLeft(char *str,int len)
{
    char ch=str[0];
    int i;
    for( i=1;i<len;i++)
    {
        str[i-1]=str[i];
    }
    str[i-1]=ch;
    str[i]='\0';

}
int isLower(char *str1,int len)
{
    //printf("%c",*str1);
    if(len==0)
    {
        return 1;
    }
    if(*str1<'a' || *str1>'z')
    {
        return 0;
    }
    return isLower((str1+1),--len);
}
int main()
{
    char str[5]="Hello";
    int len=5;
    rotateOnePosLeft(str,len);
    for(int i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    char str1[7]="cricket";
    int len1=7;
    printf("%d",isLower(str1,len1));
}