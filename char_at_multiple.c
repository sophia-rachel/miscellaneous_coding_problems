//A string is passed as input. An integer is passed as input. The program will print characters at positions which are multiples of the integer.
//input:
//abcdefghijklmnop
//6
//output
//fl
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,b;
    char a[100];
    scanf("%[^\n]s",a);
    scanf("%d",&b);
    for(i=b-1;i<strlen(a);i=i+b)
    printf("%c",a[i]);
    return 0;
}
