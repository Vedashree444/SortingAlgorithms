/******************************************************************************

Selection Sort

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.

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
    void SelectionSort(int a[100], int n){
        int i,j, min_index;
        for(i=0;i<n;i++){
            min_index=i;
            for(j=i+1;j<n;j++){
                if(a[j]<a[i])
                    min_index = j;
            }
            swap(&a[i], &a[min_index]);
        }
        printf("sorted array\n");
        display(a,n);
    }
    printf("enter number of elements\n");
    scanf("%d",&n);
    printf("enter values\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    SelectionSort(a,n);
    return 0;
}
