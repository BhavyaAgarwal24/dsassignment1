#include <iostream>
using namespace std;

int main() {
    int a[10][10], n, m;
    cout << "Enter number of rows and columns: ";
    cin >> n >> m;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++)
            rowSum += a[i][j];
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

    for (int j = 0; j < m; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++)
            colSum += a[i][j];
        cout << "Sum of column " << j + 1 << " = " << colSum << endl;
    }
    return 0;
}