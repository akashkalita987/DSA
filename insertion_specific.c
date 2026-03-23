#include<stdio.h>
int main()
{
    int a[50], size, num=0, position;
    printf("\nEnter the size of the array");
    scanf("%d",&size);
    printf("\nEnter %d elements in array:-");
    for (int i = 0; i < size; i++ )
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe elements in the array are:-\n");
    for( int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter the number you want to insert:-");
    scanf("%d",&num);
    printf("\nEnter the position in which you want to\ninsert the number:-");
    scanf("%d",&position);
    for(int i = size-1; i >= position - 1; i--)
    {
        a[i+1]=a[i];
    }
    a[position - 1] = num;
    size++;
    printf("\nNew array is:");
    for(int i = 0; i < size; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}