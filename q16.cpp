#include <iostream>
#define endl "\n"
#define N 1000
using namespace std;

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

void print(int arr[][N], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int vector[N] = {10, 20, 30};
    int matrix[N][N] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};
    cout << "Printing vector with overloaded function print(): " << endl;
    print(vector, 3);
    cout << endl;
    cout << "Printing matrix with overloaded function print(): " << endl;
    print(matrix, 3, 3);
    cout << endl;
}