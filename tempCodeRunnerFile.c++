#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <utility>
#define ll long long
#define ull unsigned long long
#define ld long double
#define nl "\n"
#define str string
#define sp " "
#define sz(x) x.size()
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define fi first
#define se second
#define vi vector<int>
#define vll vector<long long>
#define vec vector
#define pb push_back
#define fixed(n) fixed << setprecision(n)
using namespace std;

void solve()
{   
    string a;
    cin >> a;
    ll c = 0, v = 1;
    for (int i = 0; i < a.size(); i++) {
        c += a[i] - '0';
    }
    while (c > 9) { 
        ll temp = 0;
        while (c > 0) {
            temp += c % 10;
            c /= 10;
        }
        c = temp;
        v++;
    }
    if(a.size>1){
    cout << v << endl;}
    else{
        cout<<0;
    }
}
int main()
{
  
 
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      solve();
   return 0;
}