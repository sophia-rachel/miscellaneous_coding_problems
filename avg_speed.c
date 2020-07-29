//A line with space seperated values of distance and time again seperated with @ is passed. The program prints the average speed.
//input:
//30@3 60@4
//output
//12.85
#include <stdio.h>
int main()
{
    int dist=0,times=0,c,d,e;
    char a[100];
    scanf("%[^\n]s",a);
    char*b=a;
    while(sscanf(b,"%d@%d %n",&c,&d,&e)==2)
    {
        dist=dist+c;
        times=times+d;
        b=b+e;
    }
    printf("%.2f",dist/(float)times);
    return 0;
}
