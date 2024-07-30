#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool binarySearchIterative(int arr[], int N, int K) {
    int left = 0, right = N - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == K) {
            return true;
        }
        if (arr[mid] < K) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int N, K;
    cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    bool result = binarySearchIterative(arr, N, K);
    cout << (result ? "true" : "false") << endl;
    return 0;
}
