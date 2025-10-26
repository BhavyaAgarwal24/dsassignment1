#include <iostream>
using namespace std;

#define MAX 100

int arr[MAX], n;

void inputArray() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void removeDuplicates() {
    int new_n = n;
    for (int i = 0; i < new_n; i++) {
        for (int j = i + 1; j < new_n; ) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < new_n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                new_n--;
            } else {
                j++;
            }
        }
    }
    n = new_n;
}

void displayArray() {
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    inputArray();
    removeDuplicates();
    displayArray();
    return 0;
}