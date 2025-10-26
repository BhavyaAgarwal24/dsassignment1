#include <iostream>
using namespace std;

void reverseArray() {
    int n, arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void matrixMultiplication() {
    int a[10][10], b[10][10], c[10][10] = {0};
    int n1, m1, n2, m2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> n1 >> m1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> n2 >> m2;

    if (m1 != n2) {
        cout << "Matrix multiplication not possible!\n";
        return;
    }

    cout << "Enter first matrix:\n";
    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m1; j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < n2; i++)
        for (int j = 0; j < m2; j++)
            cin >> b[i][j];

    for (int i = 0; i < n1; i++)
        for (int j = 0; j < m2; j++)
            for (int k = 0; k < m1; k++)
                c[i][j] += a[i][k] * b[k][j];

    cout << "Resultant matrix:\n";
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < m2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}

void transposeMatrix() {
    int a[10][10], t[10][10];
    int n, m;
    cout << "Enter rows and columns of matrix: ";
    cin >> n >> m;
    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            t[j][i] = a[i][j];

    cout << "Transpose:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << t[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Reverse Array\n";
        cout << "2. Matrix Multiplication\n";
        cout << "3. Transpose of Matrix\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1: reverseArray(); break;
            case 2: matrixMultiplication(); break;
            case 3: transposeMatrix(); break;
            case 4: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 4);
    return 0;
}