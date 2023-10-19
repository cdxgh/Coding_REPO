#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[], int n)
{
    int cnt = 0, candidate = 0;
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            candidate = arr[i];
        }
        cnt += (arr[i] == candidate) ? 1 : -1;
    }
    cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            cnt++;
        }
    }
    return (cnt > n / 2) ? candidate : -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int majority = majorityElement(arr, n);
        if (majority != -1) {
            cout << majority << endl;
        } else {
            cout << "No Majority Element" << endl;
        }
    }
    return 0;
}
