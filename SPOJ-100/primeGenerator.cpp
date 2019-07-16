#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define MAX 100001
using namespace std;
 
vector<int> sieve(){
    bool isPrime[MAX];
    memset(isPrime,true,sizeof(isPrime));
    //bool[0]=false, bool[1]=false;
    for(int i=2;i*i<MAX;i++){
        if(isPrime[i]){
            for(int j=i;j*i<MAX;j++){
                isPrime[j*i]=false;
            }
        }
    }
    vector<int> primes;
    for(int i=2;i<MAX;i++){
        if(isPrime[i]){
            primes.pb(i);
        }
    }
    return primes;
}
 
void printPrimes(ll l,ll r,vector<int> primes){
    bool isPrime[r-l+1];
    memset(isPrime,true,sizeof(isPrime));
    if(l==1){
        isPrime[0]=false;
    }
    for(int i=0;primes[i]*(ll)primes[i]<=r;i++){
        int currPrime = primes[i];
        ll base = (l/currPrime)*currPrime;
        if(base < currPrime){
            base+=currPrime;
        }
        for(ll j=base;j<=r;j+=currPrime){
            isPrime[j-l]=false;
        }
        if(base==currPrime){
            isPrime[base-l]=true;
        }
    }
    for(int i=0;i<=r-l;i++){
        if(isPrime[i]){
            cout<<i+l<<"\n";
        }
    }
    cout<<"\n";
}
 
int main() {
	int t;
	cin>>t;
	vector<int> primes = sieve();
	while(t--){
	    ll m,n;
	    cin>>m>>n;
        printPrimes(m,n,primes);
	}
	return 0;
} 
