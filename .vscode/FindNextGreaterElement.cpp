#include <iostream>
#include <bits/stdc++.h>
using namespace std;

    //Push the element to stack
    void  pushEle(int arr[],int n){
        stack<int> st;
        st.push(arr[0]);

        for(int i=1;i<n;i++){
            if(st.empty()){
                st.push(arr[i]);
                continue;
            }

            while(st.empty()==false && st.top()<arr[i]){
                cout<<"top"<<" "<<st.top()<<" "<<"next greater"<<arr[i]<<endl;
                
                st.pop();
            }
            st.push(arr[i]);
        }
        while(st.empty()==false){
            cout<<"top"<<st.top()<<"-1"<<" ";
            st.pop();
        }

    }
    int main(){
        int n=4;
        //cin>>n;
        int arr[]={11,14,15,8};
        pushEle(arr,n);

        
        
    return 0;
}