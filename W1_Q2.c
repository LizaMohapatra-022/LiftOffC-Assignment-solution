#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter any two number: \n");
    scanf("%d %d", &a ,&b);
    if(a>b)
    printf("a is maximum");
else
printf("b is maximum");
return 0;
}