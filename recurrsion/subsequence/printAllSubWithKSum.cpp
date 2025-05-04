#include <iostream>
#include <vector>
using namespace std;

void printAllSubWithKSum(int idx, vector<int>& arr, vector<int>& ans, int sum) {
    if (idx == arr.size()) {
        cout << "[";
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i];
            if (i < ans.size() - 1) cout << ", ";
        }
        cout << "] -> Sum: " << sum << endl;
        return;
    }

    // Exclude current element
    printAllSubWithKSum(idx + 1, arr, ans, sum);

    // Include current element
    ans.push_back(arr[idx]);
    printAllSubWithKSum(idx + 1, arr, ans, sum + arr[idx]);
    ans.pop_back(); // Backtrack
}

int main() {
    vector<int> arr = {1, 2, 1};
    vector<int> ans;
    int sum = 0;
    printAllSubWithKSum(0, arr, ans, sum);
}
