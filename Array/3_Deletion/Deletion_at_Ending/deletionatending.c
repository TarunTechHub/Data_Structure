#include<stdio.h>
int main()
{
    int a[10], size, i;
    printf("Enter the array size of an array: \n");
    scanf("%d",&size);
    printf("Enter array elements: \n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    size--;
    printf("The array elements are: \n");
    for(i=0;i<size;i++){
        printf("%d",a[i]);
    }
    return 0;

}