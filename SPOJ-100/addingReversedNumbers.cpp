#include <iostream>
using namespace std;
int reverse(int num){
    int temp = num,rnum=0;
    while(temp!=0){
        int rem = temp%10;
        rnum = rnum*10 + rem;
        temp/=10;
    }
    return rnum;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int num1,num2;
        cin>>num1>>num2;
        int rnum1 = reverse(num1);
        int rnum2 = reverse(num2);
        int res = rnum1 + rnum2;
        cout<<reverse(res)<<"\n";
    }
} 
