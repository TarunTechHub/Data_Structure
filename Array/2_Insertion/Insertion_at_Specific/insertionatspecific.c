#include <stdio.h>
int main()
{
    int a[10], i, size, num, pos;
    printf("Enter the size of an array: \n");
    scanf("%d", &size);
    printf("Enter the array element: \n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the Number to Insert: \n");
    scanf("%d",&num);
    printf("Enter the position: \n");
    scanf("%d",&pos);
    for( i = size-1; i >= pos-1; i-- ){
        a[i+1] = a[i];
    }
    a[pos-1] = num;
    size++;
    printf("The array element are: \n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}