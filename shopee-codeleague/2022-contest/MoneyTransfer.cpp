#include<bits/stdc++.h>
using namespace std;

void solution() {

    int n, t;
    map<string, int> u;

    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        string nme;
        int b;
        cin >> nme >> b;
        u.insert(pair<string, int>(nme, b));
    }
    for (int i = 0; i < t; i++) {
        string s, r;
        int v, sb, rb;
        cin >> s >> r >> v;
        if ((u.find(s)->first == s) && (u.find(r)->first == r)) {
            if (s != r) {
            sb = u.find(s)->second;
            rb = u.find(r)->second;
            if (v < sb) {
                u.find(r)->second = (rb + v);
                u.find(s)->second = (sb - v);
            }
        }
        }
    }
    for (auto const &pair: u) {
        cout << pair.first << " " << pair.second << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solution();
    return 0;
}