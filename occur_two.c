//Program to print number of occurences of two input letters in string.
//input:
//abcd123abiiiiiab?];ab
//a
//b
//output:
//4
#include <stdio.h>
int main()
{
    int i,count=0;
    char b,c,a[100];
    scanf("%s",a);
    scanf("\n%c\n%c",&b,&c);
    for(i=0;i<strlen(a);i++)
        if(a[i]==b && a[i+1]==c)
            count++;
    printf("%d",count);        
    return 0;
}
