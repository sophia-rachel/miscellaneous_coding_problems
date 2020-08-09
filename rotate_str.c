//Program to rotate string given the no of character to be rotated
//input:
//camouflage
//5
//output:
//flagecamou
#include <stdio.h>
int main()
{
    int i,b,j=0,c;
    char a[100],d[100];
    scanf("%s%d",a,&b);
    c=strlen(a);
    for(i=c-b;i<c;i++)
        d[j++]=a[i];
    for(i=0;i<c-b;i++)
        d[j++]=a[i];
    d[j]='\0';
    printf("%s",d);
    return 0;
}
