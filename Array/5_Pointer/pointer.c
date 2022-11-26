#include<stdio.h>
int main()
{
    //int b = 10;
    //int *p;
    //p = &b;
    //printf("The value of b: %d\n",*p);
    //printf("The adress of b: %p\n",p);
    //return 0;
    int a[10],size,i;
    printf("Enter the size of an array: \n");
    scanf("%d",&size);
    printf("Enter the array elements: \n");
    for(i=0;i<size;i++){
        scanf("%d\n",&a[i]);
    }
    int *p;
    p = a;
    p++;
    printf("%p\n",p);
    printf("%p\n",a+1);
    printf("%p\n",&a+1);
    printf("%d\n",*(a+1));
    printf("%d\n",*a+1);
    return 0;
}

