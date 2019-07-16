#include <iostream>
using namespace std;
 
int main() {
	int a1,a2,a3;
	while(1){
	    cin>>a1>>a2>>a3;
	    if(a1==0 && a2==0 && a3==0)
	        break;
	    else if(a3-a2==a2-a1 && a3-a2!=0 && a2-a1!=0){
	        cout<<"AP"<<" "<<a3+(a3-a2)<<"\n";
	    }else if((a2*a2)==(a1*a3)){
	        cout<<"GP"<<" "<<a3*(a2/a1)<<"\n";
	    }
	}
	return 0;
} 
