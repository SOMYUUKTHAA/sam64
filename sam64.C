#include<stdio.h>
#include<string.h>
void main()
{
    int N,M,add;
    puts("\nENTER VALUE");
    scanf("%d\t%d",&N,&M);
    add=N+M;
    if(add%2!=0)
    puts("\nODD");
    else
    puts("EVEN");
}
