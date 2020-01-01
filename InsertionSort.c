/******************************************************************************
Insertion Sort

Insertion sort is a simple sorting algorithm that works the way we sort playing cards in our hands.

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
            printf("%d\t", a[i]);
    }
    void InsertionSort(int a[100], int n){
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=i;j>=0;j--){
                if(a[i]<a[j])
                    swap(&a[i], &a[j]);
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
    InsertionSort(a,n);
    return 0;
}
