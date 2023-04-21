#include<stdio.h>
#include<string.h>
//func rotate
void rotate(char *str,int len)
{
    //Initialization
    int i;
    int j=0;
    //Looping througn len/2 times
    while(j<=len/2)
    {
    char ch=str[0];
    //Single rotation
    for( i=1;i<len;i++)
    {
        str[i-1]=str[i];
    }
    str[i-1]=ch;
    //str[i]='\0';
    j++;
    }
}
//Func moveElements
void moveElements(char *str,int len,int idsum)
{
     //Initialization
    int i;
    int j=0;
     //Looping througn len/2 times
    while(j<=idsum)
    {
    char ch=str[0];
    //Single rotation
    for( i=1;i<len;i++)
    {
        str[i-1]=str[i];
    }
    str[i-1]=ch;
    //str[i]='\0';
    j++;
    }
}
int main()
{
    char str[5]="Hello";
    int len=5;
    rotate(str,len);
    //Add name and id here
    //printf("Name: ,id: ")
    for(int i=0;i<len;i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
    char str1[5]="SUNNY";
    //Taking ur idsum as 3
    moveElements(str1,len,3);
    for(int i=0;i<len;i++)
    {
        printf("%c",str1[i]);
    }
}