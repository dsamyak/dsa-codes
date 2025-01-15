#include <iostream>
using namespace std;

#define MAX 100

int main() {
    int arr[MAX];
    int mid, beg, key, end, size, position = -1, i;

    cout << "How many numbers do you want to store: ";  
    cin >> size;

    cout << "Enter " << size << " elements in ascending or descending order:\n";
    for (i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number you want to search: ";
    cin >> key;

    // Adjusting the beginning and end indices for binary search
    beg = 0;         // Set to the starting index
    end = size - 1; // Set to the last index

    do {
        mid = (beg + end) / 2;
        if (key == arr[mid]) {
            position = mid; // Found the key
            break; // Exit the loop if found
        } else {
            if (key < arr[mid]) {
                end = mid - 1; // Search in the left half
            } else {
                beg = mid + 1; // Search in the right half
            }
        }
    } while (beg <= end); // Continue until the search space is valid

    if (position != -1) {
        cout << "Element found at index " << position+1 << endl;
    } else {
        cout << "The element does not exist." << endl;
    }

    return 0;
}
