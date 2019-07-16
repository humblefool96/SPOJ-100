#include <iostream>
using namespace std;
int arr[200];
int arr_size=0;
 
int multiply(int x,int arr[],int arr_size){
    int carry=0;
    for(int i=0;i<arr_size;i++){
        int prod = arr[i]*x+carry;
        arr[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        arr[arr_size] = carry%10;
        carry = carry/10;
        arr_size++;
    }
    return arr_size;
}
void factorial(int n){
    arr[0]=1;
    arr_size=1;
    for(int x=2;x<=n;x++){
        arr_size = multiply(x,arr,arr_size);
    }
    //print in reverse order
    for(int i = arr_size-1;i>=0;i--){
        cout<<arr[i];
    }
    cout<<"\n";
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    factorial(n);
	}
	return 0;
} #include <iostream>
using namespace std;
int arr[200];
int arr_size=0;
 
int multiply(int x,int arr[],int arr_size){
    int carry=0;
    for(int i=0;i<arr_size;i++){
        int prod = arr[i]*x+carry;
        arr[i] = prod%10;
        carry = prod/10;
    }
    while(carry){
        arr[arr_size] = carry%10;
        carry = carry/10;
        arr_size++;
    }
    return arr_size;
}
void factorial(int n){
    arr[0]=1;
    arr_size=1;
    for(int x=2;x<=n;x++){
        arr_size = multiply(x,arr,arr_size);
    }
    //print in reverse order
    for(int i = arr_size-1;i>=0;i--){
        cout<<arr[i];
    }
    cout<<"\n";
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    factorial(n);
	}
	return 0;
} 
