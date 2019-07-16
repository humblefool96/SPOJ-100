#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    while(1){
        int n;
        cin>>n;
        if(n==-1)
            break;
        int arr[n]={0};
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            
        }
        
        int temp = sum / n;
        int val1=0,val2=0;
        for(int i=0;i<n;i++){
            if(arr[i] > temp )
                val1 += arr[i] - temp;
            if(arr[i] < temp)
                val2 -= arr[i] - temp;
        }
        if(val1==val2)
            cout<<val1<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
