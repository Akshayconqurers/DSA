#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key) {
    int i = 0, j = m - 1;

    while (i < n && j >= 0) {
        if (mat[i][j] == key) {
            cout << "Found at cell (" << i << ", " << j << ")\n";
            return true;
        } else if (mat[i][j] > key) {
            // Move left
            j--;
        } else {
            // Move down
            i++;
        }
    }

    cout << "Key not found\n";
    return false;
}

int main() {
    int mat[4][4] = {{1, 3, 4, 6},
                     {8, 9, 10, 12},
                     {14, 15, 17, 29},
                     {30, 34, 45, 55}};

    search(mat, 4, 4, 45);
    return 0;
}
