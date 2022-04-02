#include<bits/stdc++.h>
using namespace std;

int FindIt (vector<int> arr) {
   int f;
   for (int i = 0; i < arr.size(); i++) {
      if (i == 0) {
         f = arr[i];         
      } else {
         if (f > arr[i]) {
            f = arr[i];
         }
      }
   }
   return f;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr = 0; i_arr < n; i_arr++)
    {
    	cin >> arr[i_arr];
    }
 
    int out_;
    out_ = FindIt(arr);
    cout << out_;
    return 0;
}