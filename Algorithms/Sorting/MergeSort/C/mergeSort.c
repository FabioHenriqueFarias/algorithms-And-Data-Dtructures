// Merge sort, or mix sort, is an efficient sorting algorithm that uses the concept of divide and conquer.

// 1.It divides a list into smaller sublists.
// 2.order these sublists
// 3.Then combine them to get the final ordered list.

#include <stdio.h>


void  mergeSort(int arr[], int left, int right);
void merge(int arr[],int left_, int right_, int middl);
void printArray(int arr[], int size);

int main(){
    int arr[] = {4,5,9,10,85,74};
    int size = sizeof(arr)/sizeof(arr[0]);

    mergeSort(arr, 0, size-1);

    printArray(arr, size);
    
    return 0;
}


void printArray(int arr[], int size){
    
    printf("Sorted array: \n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void mergeSort(int arr[], int left, int right){

    if (left < right)
    {
        int middle = left + (right - left) / 2;

        mergeSort(arr, left, middle);
        mergeSort(arr, middle+1, right);

        merge(arr, left, right, middle);
    }
    
}

void merge(int arr[],int left, int right, int middle){

    int i, j, k;
    int leftSize = middle - left + 1;
    int rightSize = right - middle;

    int Left[leftSize], Right[rightSize];

    for (i = 0; i < leftSize; i++)
    {
        Left[i] = arr[left + i];
    }

    for (j = 0; j < rightSize; j++)
    {
        Right[j] = arr[middle + 1 + j];
    }

    i = 0;
    j = 0;
    k = left;

    while (i < leftSize && j < rightSize)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }else{
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }

    while (j < rightSize)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

