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
    string str;
    cin >> str;
    vector<pair<char,int>> lower;
    vector<pair<char,int>> upper;
    string ans = "";
    for(int i = 0; i<str.size(); i++){
        if(str[i] == 'b'){
            if(lower.size()!=0){
                lower.pop_back();
            }
        }else if(str[i] == 'B'){
            if(upper.size()!=0){
                upper.pop_back();
            }
        }else{
            if(65<=str[i] && str[i]<=90){           // comparing ASCII value
                upper.push_back(MP(str[i],i));
            }else{
                lower.push_back(MP(str[i],i));
            }
        }
    }

    int i,j;
    i = 0;
    j = 0;
    while(i < lower.size() && j < upper.size()){
        if(lower[i].second < upper[j].second){
            ans += lower[i].first;
            i++;
        }else{
            ans += upper[j].first;
            j++;
        }
    }

    while(i < lower.size()){            // if j terminateed first
        ans += lower[i].first;
        i++;
    }

    while(j < upper.size()){
        ans += upper[j].first;
        j++;
    }

    cout << ans << endl;
}
 
int main(){
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;  
}