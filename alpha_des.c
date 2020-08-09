//Program to print the alphabets in a string in descending order.
//input:
//abcdefghi
//output:
//ihgfedcba
#include <stdio.h>
int main()
{
    int i;
    int b[26]={0};
    char a[100];
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    b[((int)a[i]-97)]++;
    for(i=25;i>=0;i--)
        if(b[i]>0)
            printf("%c",(char)(i+97));
    return 0;
}
