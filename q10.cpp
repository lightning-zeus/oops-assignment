#include <bits/stdc++.h>
using namespace std;
void swapRef(int &a, int &b);
void swapPointer(int *a, int *b);
int main() {
    cout.precision(10);
    int a = -5, b = 5;
    clock_t startRef = clock();
    swapRef(a, b);
    clock_t endRef = clock();

    clock_t startPointer = clock();
    swapPointer(&a, &b);
    clock_t endPointer = clock();

    double refTime = ((double)(endRef - startRef)) / CLOCKS_PER_SEC;
    double pointerTime = ((double)(endPointer - startPointer)) / CLOCKS_PER_SEC;

    printf("Swap by reference took %lf secs\n", refTime);
    printf("Swap by pointer took %lf secs\n", pointerTime);
    if (refTime > pointerTime) {
        printf("Swap by pointer was faster by %lf secs\n",
               refTime - pointerTime);
    } else if (pointerTime > refTime) {
        printf("Swap by pointer was faster by %lf secs\n",
               pointerTime - refTime);
    } else {
        cout << "It doesnt not matter" << endl;
    }
}

void swapRef(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int *a, int *b) {
    int temp = *a;
    *a = (*b);
    *b = temp;
}