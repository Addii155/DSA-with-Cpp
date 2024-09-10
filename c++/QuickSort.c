#include<stdio.h>
void swap(int *a,int *c)
{
    int temp=*a;
    *a=*c;
    *c=temp;
}
// int partition(int arr[],int l,int h)
// {
//     int pivot=arr[l];
//     int i=l;
//     int j=h;
//     while(i<j)
//     {
//         do{
//             i++;
//         } while(arr[i]<=pivot);
//         do{
//             j--;
//         }while(arr[i]>pivot);
//         printf("%d",arr[i]);
        
//     }
//     int temp=arr[l];
//     arr[l]=arr[j];
//     arr[j]=temp;
//      return j;
// }
int partition(int arr[], int low, int high)
{
 
    // initialize pivot to be the first element
    int pivot = arr[low];
    int i = low;
    int j = high;
 
    while (i < j) {
 
        // condition 1: find the first element greater than
        // the pivot (from starting)
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
 
        // condition 2: find the first element smaller than
        // the pivot (from last)
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) {
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}
void QuickSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int j=partition(arr,l,h);
        QuickSort(arr,l,j);
        QuickSort(arr,j+1,h);
    }
}
int main()
{
    int arr[]={ 3,5,12,7,9,2,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}