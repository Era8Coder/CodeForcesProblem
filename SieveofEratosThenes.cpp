#include<bits/stdc++.h>
using namespace std;
const int NMax = 1e9 + 7;

bool isprime[NMax];

void SieveOfEratosThenes(int limit){
    for(int i=2; i<=limit; i++){    
        isprime[i] = true;
    }

    for(int i=2; i<=limit/2; i++){              // think it by taking an example if size 2*i > limit; then it will not have nay prime further also
        if(isprime[i]){     // if that particular number is true get it's multiples also
            for(int j=2*i; j<=limit; j+=i){         // j will increase as an integral multiple of i 
                isprime[j] = false;
            }
        }
    }
}

int main(){
    int n;  cin >> n;
    SieveOfEratosThenes(n);
    for(int i=0; i<n; i++){
        if(isprime[i]){
            cout << i << endl;
        }
    }
    return 0;
}