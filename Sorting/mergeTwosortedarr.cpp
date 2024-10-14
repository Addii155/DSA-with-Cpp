#include <iostream>
#include <vector>
using namespace std;

void mergeAndSort(vector<int>& a, vector<int>& b, int m, int n) {
    // Merging arrays
    int i = m, j = 0;
    while (j < n) {
        a[i] = b[j];  // Merging array b into array a from index m
        i++;
        j++;
    }

    // Total size of merged array
    int total = a.size();
    
    // Initial gap
    int gap = (total / 2) + (total % 2);
    
    // Gap Method to sort the merged array
    while (gap > 0) {
        i = 0;
        j = gap;
        while (j < total) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
            i++;
            j++;
        }

        // Reduce the gap
        gap = gap <= 1 ? 0 : (gap / 2) + (gap % 2);
    }

    // Output the sorted array
    for (auto it : a) cout << it << " ";
    cout << endl;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 0, 0, 0, 0};  // Array a (size m + n)
    vector<int> b = {2, 4, 6, 8};              // Array b (size n)
    
    int m = 4;  // Number of elements in array a
    int n = 4;  // Number of elements in array b

    mergeAndSort(a, b, m, n);
    
    return 0;
}
