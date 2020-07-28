//Program to accept a string and print the number of words in it.
//input:
//Have a good day.
//output
//4
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,c=0;
    char a[100];
    scanf("%[^\n]s",a);
    for(i=0;i<strlen(a);i++)
    if(a[i]==' ')
    c++;
    printf("%d",c+1);
    return 0;
}
