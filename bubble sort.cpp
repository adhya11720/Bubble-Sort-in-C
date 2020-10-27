/*Bubble Sort in C */ 
#include <stdio.h>

void bubbleSortfunc(int arr[], int n)
{
    int i, j, temp;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
    }
    
     
    printf("The Sorted Array is: ");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}

int main()
{
    int arr[100], i, n, temp;
    
    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("Enter element no. %d: ", i+1);
        scanf("%d", &arr[i]);
    }
     
    bubbleSort(arr, n);
    
    return 0;
}
