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
void Moageza()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin),freopen("output.txt","w",stdout);
    // #endif
    ios_base::sync_with_stdio(0), cin.tie(nullptr), cout.tie(nullptr);
}
 
void solve()
{   
   str a;cin >> a;
   ll c=0;
   for(int i=0; i<a.size(); i++){
    c+=abs((a[i]-'a')-(a[i+1]-'a'));
   }
   cout << c << endl;
}
int main()
{
    Moageza();
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    //     cout << endl;
    // }
    solve();
    return 0;
}