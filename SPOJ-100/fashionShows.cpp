#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int arr1[n]={0},arr2[n]={0};
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int res = 0;
    for(int i=0;i<n;i++){
        res+=arr1[i]*arr2[i];
    }
    cout<<res<<"\n";
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
} 
