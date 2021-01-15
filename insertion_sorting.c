#include <stdio.h>


void display(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void insertion_sort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    
    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}


int main() {
  int data[] = {12,43,2,6,99,76,54,82,111,64,54};
  int size = sizeof(data) / sizeof(data[0]);
  insertion_sort(data, size);
  printf("The array after applying insertion sort: \n");
  display(data, size);
}