//Program to print all strings formed by left shifting alphabets 
//input:
//1aK*5Ps
//output:
//aK*5Ps1 K*5Ps1a *5Ps1aK 5Ps1aK* Ps1aK*5 s1aK*5P 1aK*5Ps 
//7
#include <stdio.h>

int main()
{
    int i,c=0,n;
    char a[100],b[100],temp;
    scanf("%s",a);
    strcpy(b,a);
    n=strlen(a);
    b[n-1]='\0';
    while(strcmp(a,b))
    {
        if(c==0)
        b[n-1]=a[n-1];
        temp=b[0];
        for(i=1;i<n;i++)
        b[i-1]=b[i];
        b[i-1]=temp;
        c++;
        printf("%s ",b);
    }
    printf("\n%d",c);
 
    return 0;
}
