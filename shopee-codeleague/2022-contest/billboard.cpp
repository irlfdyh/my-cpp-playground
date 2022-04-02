#include<bits/stdc++.h>
using namespace std;

void solution() {
    int N, res;
    res = 0;
    int arr[10];
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < N; i++) {
        res += arr[i];
    }
    cout << floor((float) res/2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
    return 0;
}