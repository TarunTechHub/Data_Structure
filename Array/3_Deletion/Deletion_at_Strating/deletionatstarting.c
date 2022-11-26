#include<stdio.h>
int main()
{
    int a[10], i, size;
    printf("Enter the size of an array: ");
    scanf("%d", &size);
    printf("Enter the array elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        a[i] = a[i+1];
    }
    size--;
    printf("The array elemets: ");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    return 0;
}