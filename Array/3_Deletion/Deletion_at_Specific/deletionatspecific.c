#include<stdio.h>
int main()
{
    int a[10], i, size, num, pos;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for(i=0; i< size; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the position you want delete: ");
    scanf("%d",&pos);
    for(i=pos-1; i<size-1; i++){
        a[i] = a[i+1];
    }
    size--;
    printf("The array elements are: ");
    for(i=0; i<size;i++){
        printf("%d",a[i]);
    }
    return 0;

}