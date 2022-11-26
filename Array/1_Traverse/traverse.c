#include<stdio.h>
int main()
{
    int a[10], i, size;
    printf("Enter the size of an array: \n");
    scanf("%d",&size);
    printf("Enter the array element: \n");
    for( i = 0; i < size; i++){
        scanf("%d",&a[i]);
    }
    printf("The array element are: \n");
    for (i = 0; i < size; i++){
        printf("%d\n",a[i]);
    }
    return 0;
}