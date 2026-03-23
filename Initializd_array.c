#include<stdio.h>
#include<string.h>
int main()
{
    int a[5];
    char b[5];
    printf("\nEnter the value of a");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter 5 characters for b (separated by spaces or newlines):\n");
    for(int i = 0; i < 5; i++)
    {
        scanf(" %c",&b[i]);
    }
    printf("\nThe value of a are:-");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe values of b are:-");
    for(int i = 0; i < 5; i++)
    {
        printf("%c ",b[i]);
    }
    return 0;
}