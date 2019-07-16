#include <iostream>
using namespace std;
 
int main() {
	int n;
	cin>>n;
	while(n--){
	    int x,y;
	    cin>>x>>y;
	    if(x%2==0 && y==x)
	        cout<<2*x<<"\n";
	    else if(x%2==1 && y==x)
	        cout<<2*x-1<<"\n";
	    else if(x%2==0 && y==x-2)
	        cout<<x+y<<"\n";
	    else if(x%2==1 && y==x-2)
	        cout<<x+y-1<<"\n";
	    else
	        cout<<"No Number"<<"\n";
	}
	return 0;
} 
