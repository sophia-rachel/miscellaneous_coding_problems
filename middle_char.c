//Program to print the required number of characters in the middle
//input
//4
//abcdef
//output
//bcde
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,a,n,c;
    char b[100];
    scanf("%d",&a);
    scanf("%s",b);
    n=strlen(b)/2;
    c=a/2;
    for(i=0;i<a;i++,n++)
        printf("%c",b[n-c]);
    return 0;
}
