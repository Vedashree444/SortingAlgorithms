/******************************************************************************
Bubble Sort

Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.                   

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100];
    int n,i;
    void swap(int *x, int *y){
     int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
    void display(int a[100], int n){
        int i;
        for(i=0;i<n;i++)
            printf("%d\n", a[i]);
    }
    void BubbleSort(int a[100], int n){
        int i,j;
        for(i=0;i<n-1;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1])
                    swap(&a[j], &a[j+1]);
            }
        }
        printf("sorted array\n");
        display(a,n);
    }
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter values\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    BubbleSort(a,n);
    return 0;
}
