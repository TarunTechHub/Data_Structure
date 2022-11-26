#include<stdio.h>
int main()
{
    int a[10], i, num, size;
    printf("Enter the size: \n");
    scanf("%d",&size);
    printf("Enter the element: \n");
    for( i = 0; i < size; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the number to insert: \n");
    scanf("%d",&num);
    for(i=size-1 ; i>=0 ; i--){
        a[i + 1] = a[i];
    }
    a[0]=num;
    size++;
    printf("The array elements are: \n");
    for( i = 0; i < size; i++){
        printf("%d",a[i]);
    }
    return 0;
}