//Program to capitalize the first letter of every word
//input
//he is   strong.
//output
//He Is   Strong.
#include <stdio.h>

int main()
{
    int i;
    char a[100];
    scanf("%[^\n]s",a);
    a[0]=toupper(a[0]);
    for(i=1;i<strlen(a);i++)
    {
        if(a[i]==' ')
        {
            while(a[i]==' ')
            i++;
            a[i]=toupper(a[i]);
        }
    }
    printf("%s",a);
    return 0;
}
