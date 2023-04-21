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