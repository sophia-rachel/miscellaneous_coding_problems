//A string is given as input. If the number following the character is even, the character is repeated the number times and  printed. If the number is odd the character and number is printed.
//Example INPUT: a6b3c10d1
//OUTPUT: aaaaaab3ccccccccccd1

#include <stdio.h>

int main()
{
    int b,i;
    char a;
    while(scanf("%c%d",&a,&b)!=-1)
    {
        if(b%2==0)
        for(i=0;i<b;i++)
        printf("%c",a);
        else
        printf("%c%d",a,b);
    }

    return 0;
}
