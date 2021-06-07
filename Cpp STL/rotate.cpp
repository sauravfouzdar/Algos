/* 
problem link - https://codeforces.com/problemset/problem/1511/C
solution link - https://codeforces.com/contest/1511/submission/118746394
*/
#include<iostream>
#include<vector>
#include <string>
//#include<bits/stdc++.h>
#include<stack>
#include<set>
#include<algorithm>
#include<queue>
#include<map>
#include<unordered_map>
#define int long long
#define endl "\n"
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define read(v,n) for(int i=0;i<n;++i) cin>>v[i];
#define IOF ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mod 1e9+7
#define N 10000006
using namespace std;

vector<string> v;
void solution() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    read(v, n);

    while (q--) {
        int Q;
        cin >> Q;

        int id = find(v.begin(), v.end(), Q) - v.begin();
        cout << id + 1 << " ";
        rotate(v.begin(), v.begin() + id, v.begin() + id + 1);
       /* rep(i,0,n-1){
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
    }

    cout << "\n";
   
}

int32_t main() {

    IOF
    int t = 1;
    //cin >> t;
    for (int i = 1; i <= t; ++i) {
        //cout << "Case #" << i << ": ";
        solution();
    }
}



 
