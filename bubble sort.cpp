/*Bubble Sort in C */ 
#include <stdio.h>

void bubbleSortfunc(int arr[], int n)
{
    int i, j, temp;
    int flag = 0;
    for(i = 0; i < n; i++)
    {
        flag = 0;
        for(j = 0; j < n-i-1; j++)
        {
            if( arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            } 
        }
        if (flag == 0) //in case of all array is sorted 
        {
            break;
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
