#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int left, int right, int x);

int main() {

    int array[] = {2, 3, 4, 10, 40};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 10;
    int result = binarySearch(array, 0, n - 1, x) - 1;
    (result == -1) ? printf("Elemento não encontrado.\n") : printf("Elemento encontrado na posição %d.\n", result);
    return 0;
}

 int binarySearch(int array[], int left, int right, int x){

    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (array[mid] == x) {
            return mid;
        }

        if (array[mid] > x) {
            return binarySearch(array, left, mid - 1, x);
        }

        return binarySearch(array, mid + 1, right, x);
    }

    return -1;
}