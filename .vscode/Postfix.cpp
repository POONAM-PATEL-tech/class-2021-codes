#include<bits/stdc++.h>
#include <math.h>
using namespace std;

int PostfixEvaluation(string s){
  stack<int> st;
  for (int i = 0; s[i]; ++i){
    
    if (isdigit(s[i]))  
      st.push(s[i] - '0');  
    
    else{  
      int op2 = st.top();
      st.pop();  
      int op1 = st.top();
      st.pop();  
      switch (s[i])  {  
        case '+': st.push( op1 + op2); break;  
        case '-': st.push( op1 - op2); break;  
        case '*': st.push( op1 * op2); break;  
        case '/': st.push( op1/op2); break;  
        case '^': st.push( pow(op1,op2));break;
      }  
    }  
  }  
  return st.top(); 
}

int main(){
  string s;
  cin>>s;
  cout<<"Value of "<<s<<" postfix expression is "<<PostfixEvaluation(s);
}