// Merge sort, or mix sort, is an efficient sorting algorithm that uses the concept of divide and conquer.

// 1.It divides a list into smaller sublists.
// 2.order these sublists
// 3.Then combine them to get the final ordered list.

#include <stdio.h>


void  mergeSort(int arr[], int size);
void merge(int left[],int sizeLeft, int right[], int sizeRight, int arr[]);

int main(){
    int arr[] = {84,9,4,52,62,55,12,98};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

void mergeSort(int arr[], int size){
    int middle = size/2;

    int arrayLeft[middle];
    int arrayRight[size-middle];

    for (int i = 0; i < middle; i++)
    {
        arrayLeft[i] = arr[i];
    }

    for (int i = middle; i < size; i++)
    {
        arrayRight[i] = arr[i];
    }

    merge(arrayLeft, middle, arrayRight, size-middle, arr);
}

void merge(int left[],int sizeLeft, int right[], int sizeRight, int arr[]){

    int result[sizeLeft+sizeRight];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < sizeLeft && j < sizeRight)
    {
        if (left[i] < right[j])
        {
            result[k] = left[i];
            i++;
        }else
        {
            result[k] = right[j];
            j++;
        }
        k++;
    }

     while (i < sizeLeft)
    {
        result[k] = left[i];
        i++;
        k++;
    }

    while (j < sizeRight)
    {
        result[k] = right[j];
        j++;
        k++;
    }

   
    for (int i = 0; i < sizeLeft + sizeRight; i++) {
        arr[i] = result[i];
    }

}

