#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int linearSearch(int arr[], int N, int K) {
    for (int i = 0; i < N; ++i) {
        if (arr[i] == K) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N, K;
    cin >> N >> K;
    int arr[N];
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int result = linearSearch(arr, N, K);
    cout << result << endl;
    return 0;
}
