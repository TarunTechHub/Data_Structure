#include<stdio.h>
int main()
{
    int a[10], i, num, size;
    printf("Enter the size of an array: \n");
    scanf("%d", &size);
    printf("Enter the array elements: \n");
    for(i=0; i<size; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want you insert: \n");
    scanf("%d",&num);
    a[size] = num;
    size++;
    printf("The array elemets: \n");
    for(i = 0; i < size ; i++ ){
        printf("%d\n",a[i]);
    }
}