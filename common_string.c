//Program to print the common substring present in last part of first string and first part of second string.
//input
//goldfish
//fishbag
//output
//fish
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,j=0,c,k;
    char a[100],b[100],e[100];
    scanf("%s\n%s",a,b);
    c=strlen(a);
    for(i=0;i<c;i++)
    {
        j=0;
        k=i;
        if(a[k]==b[j])
        {
            while(k!=c && a[k++]==b[j++])
                e[j-1]=b[j-1];
        }
        if(k==c)
        break;
    }
    e[j]='\0';
    printf("%s",e);
    return 0;
}
