#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        int m;  cin >> m;
        int x,y; 
        while(m--){
            cin >> x >> y;
            if(y > x){
                int cost = v[y-1] - v[x-1];         // direct which I have to pay
                int mini = 0;
                for(int i=x-1; i<y; i++){
                    if(i!=0){
                        if(v[i+1] - v[i] <= v[i] - v[i-1]){
                            mini += 1;
                        }else{
                            mini += v[y-1] - v[i];
                            break;
                        }
                    }else{
                        mini += 1;
                    }
                }
                cout << min(cost,mini) << endl;
            }else if(x > y){
                int cost = (v[x-1] - v[y-1]);
                int mini = 0;
                for(int i=x-1; i>=y-1; i--){
                    if(i!=0){
                        if(v[i+1] - v[i] < v[i] - v[i-1]){
                            mini += v[x-1] - v[i];
                        }else{
                            mini+=1;
                        }        
                    }else{
                        mini += 1;
                    }
                }
                cout << min(cost,mini) << endl;
            }
        }
    }
    return 0;
}