#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int i,j,k,l;
    i = 0;
    j = v.size() - 1;
    k = 1;
    l = v.size() - 2;
    cout << abs(v[i] - v[j]) + abs(v[j] - v[k]) + abs(v[k] - v[l]) + abs(v[l] - v[i]) << endl; 
    /*
        Modulus is nothing distance's mathematical representation :)
    */
}

int main(){
    int t;  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}