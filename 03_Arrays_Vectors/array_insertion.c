#include<stdio.h>
int main()
{
    int a[50], size;
    printf("\nEnter the size of the array:-");
    scanf("%d",&size);
    printf("\nEnter %d elements in the array:",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe elements in the  array are:-\n");
    for( int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}