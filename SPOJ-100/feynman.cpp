#include <iostream>
using namespace std;
 
int main() {
	int n;
	while(cin>>n && n!=0){
	    int sum=0;
	    for(int i=n;i>=1;i--)
	        sum+=i*i;
	    cout<<sum<<"\n";
	}
	return 0;
} 
