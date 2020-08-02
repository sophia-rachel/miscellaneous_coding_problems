//Program to print the first repeating character in a string.
//input:
//abcdefgbcjkf
//output:
//b
#include <stdio.h>

int main()
{
    int i,j;
    char a[100];
    scanf("%[^\n]s",a);
    for(i=1;i<strlen(a);i++)
    {
        for(j=i+1;j<strlen(a);j++)
        {
            if(a[i]==a[j])
            {
                printf("%c",a[i]);
                exit(0);
            }
        }
    }
    return 0;
}
