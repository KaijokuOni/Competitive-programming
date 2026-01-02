#include <iostream>
using namespace std;

int main() {
    int rows,cols;
    cin>>rows>>cols; // example size
    int matrix[rows][cols];

    int num = 1;  // starting number
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            matrix[i][j] = num++;  // assign and then increase
        }
    }

    // print the matrix
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
