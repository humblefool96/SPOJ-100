#include <bits/stdc++.h>
using namespace std;
 
int prec(char ch){
    if(ch=='^') return 3;
    else if(ch=='/' || ch=='*') return 2;
    else if(ch=='+' || ch=='-') return 1;
    else return -1;
}
 
int main() {
    int t;
	cin>>t;
	while(t--){
	    string str,rpn=" ";
	    cin>>str;
	    stack<char> st;
	    int len = str.length();
	    for(int i=0;i<len;i++){
	        if(str[i]=='(')
	            st.push(str[i]);
	        else if(str[i]>='a' && str[i]<='z')
	            rpn+=str[i];
	        else if(str[i]==')'){
	            while(!st.empty() && st.top()!='('){
	                char c= st.top();
	                rpn+=c;
	                st.pop();
	            }
	            if(st.top()=='('){
	                st.pop();
	            }
	        }
	        else{  //if operator is scanned
	            while(!st.empty() && prec(str[i])<=prec(st.top())){
	                char c = st.top();
	                rpn+=c;
	                st.pop();
	            }
	            st.push(str[i]);
	        }
	    }
	    while(!st.empty()){
	        char c = st.top();
	        rpn+=c;
	        st.pop();
	    }
	    cout<<rpn<<"\n";
	}
	return 0;
} 
