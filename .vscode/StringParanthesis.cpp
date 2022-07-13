#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//class Paranthesis{
 //   public:
    bool isvalid(string str){
        stack <char> s;
        int len=str.length();
        for(int i=0;i<len;i++){
            if(str[i]=='(' || str[i]=='{' ||str[i]=='[')
            s.push(str[i]);
            else if(str[i]==')' || str[i]=='{' ||str[i]=='['){
                if(s.empty())
                return false;
                else if(str[i]==')' && s.top() !='(')
                return false;
                else if(str[i]=='}' && s.top() !='{')
                return false;
                else if(str[i]==']' && s.top() !='[')
                return false;
                else 
                s.pop();
            }
        }
        if(s.empty())
        return true;
        else
        return false;
    }


};
int main(){
   // Paranthesis one;
   string str='()';
   cout<<isvalid(str);
   /* if(isvalid(string str)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    //cin>>one.s;*/
    return 0;
}