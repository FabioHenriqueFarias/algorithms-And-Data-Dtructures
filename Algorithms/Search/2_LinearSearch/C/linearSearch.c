#include <stdio.h>
#include <stdlib.h>

int linearSearch(int array[], int element,  int size);

int main(){
    printf("--Linear Search--\n");
    int array[] = {78,1,5,6,7,9,8};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Array: [");
    for (int i = 0; i < size; i++) {
        printf("%d", array[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    printf("Resultado da posição do elemento %d no Array: %d\n", 5, linearSearch(array, 5, size));
}

int linearSearch(int array[], int element, int size){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }

    return -1;
}