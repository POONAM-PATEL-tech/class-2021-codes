#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool flag=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not a Prime";
            flag=false;
            break;
        }
    }
        if(flag==true){
        cout<<"Prime";
        
    }
    
    return 0;
}