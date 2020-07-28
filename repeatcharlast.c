//A string is passed as input. It has atleast repeating character. The program must print the first repeating character from the last

#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    char a[100];
    scanf("%[^\n]s",a);
    for(i=strlen(a);i>0;i--)
    {
        for(j=i-1;j>0;j--)
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
