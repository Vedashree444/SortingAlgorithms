/******************************************************************************
Quick sort

QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. 

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[100];
    int n,i, first, last;
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
    void QuickSort(int a[100], int first, int last){
        int i,j,pivot,temp;
        if(first<last){
            pivot = first;
            i = first;
            j = last;
            while(i < j){
                while(a[i] <= a[pivot] && i < last)
                    i = i+1;
                while(a[j] > a[pivot])
                    j = j-1;
                if(i<j){
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        QuickSort(a, first, j-1);
        QuickSort(a, j+1, last);
        }
    }
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter values\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    first = 0;
    last = n-1;
    QuickSort(a,first, last);
    printf("sorted array\n");
        display(a,n);
    return 0;
}
