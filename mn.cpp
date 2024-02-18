#include <iostream>
#include <deque>
#include <string>
#define ll long long
using namespace std;

void solve() {
    int n, b;
    cin >> n >> b;
    deque<int> v(n);
    ll product = 1;
    
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        product = (product * v[i]) % b; // Update product incrementally
    }

    string commands;
    cin >> commands;
    
    cout << product % b << " ";
    
    for (int i = 0; i < n - 1; ++i) {
        if (commands[i] == 'L') {
            product = (product * v.front()) % b;
            v.pop_front();
        } else {
            product = (product * v.back()) % b;
            v.pop_back();
        }
        cout << product % b << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}