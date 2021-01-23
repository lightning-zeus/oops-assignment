#include <bits/stdc++.h>
using namespace std;

class Table {
    int row, column;
    int** ar;

   public:
    Table(int a, int b) : row(a), column(b) {
        ar = new int*[a];
        for (int i = 0; i < b; i++) {
            ar[i] = new int[b];
        }
    }
    friend istream& operator>>(istream& in, Table& t);
    friend ostream& operator<<(ostream& out, Table& t);

    int* operator[](int index) {
        if (index < 0 || index >= row) {
            throw out_of_range("Index out of Range");
        } else {
            return this->ar[index];
        }
    }
};

istream& operator>>(istream& in, Table& t) {
    for (int i = 0; i < t.row; i++) {
        for (int j = 0; j < t.column; j++) {
            in >> t.ar[i][j];
        }
    }

    return in;
}
ostream& operator<<(ostream& out, Table& t) {
    for (int i = 0; i < t.row; i++) {
        for (int j = 0; j < t.column; j++) {
            out << t.ar[i][j] << " ";
        }
        out << endl;
    }

    return out;
}

int main() {
    Table t(4, 5), t1(4, 5);
    cin >> t;
    t[0][0] = 5;
    int x = t[2][3];
    t1 = t;
    cout << t << "\n" << t1;
}