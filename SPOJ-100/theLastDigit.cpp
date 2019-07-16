#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
ll modularExpo(ll a, ll n){
    if(a==0)
        return 0;
    if(n==0)
        return 1;
    if(n==1)
        return a;
    ll temp = modularExpo(a,n/2);
    if(n & 1){
        return (a*temp*temp) % 10;
    }else{
        return (temp * temp) % 10;
    }
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    ll a,n;
	    cin>>a>>n;
	    cout<< modularExpo(a,n)<<"\n";
	}
	return 0;
} 
