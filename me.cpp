#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef priority_queue <int, vector<int>, greater<int>> minheap;
typedef priority_queue <int> maxheap;
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define rep(i,a,b) for(int i=a; i<b; i++)
const int N=1e9+7;
const int M=1e8+7;
 
void solve(){
    vi v = {8,7,5,3,3};
    vector<int>::iterator l1,l2,l3,l4,l5;
    l1 = lower_bound(v.begin(), v.end(), 2);
    l2 = lower_bound(v.begin(), v.end(), 3);
    l3 = lower_bound(v.begin(), v.end(), 4);
    l4 = lower_bound(v.begin(), v.end(), 5);
    l5 = lower_bound(v.begin(), v.end(), 6);
    cout << *l1 << endl;
    cout << *l2 << endl;
    cout << *l3 << endl;
    cout << *l4 << endl;
    cout << *l5 << endl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1; 
    while(t--){
       solve();
    }
    return 0;  
}