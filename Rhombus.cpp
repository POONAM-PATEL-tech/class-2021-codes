#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int space =n-i;space>0;space--){
            cout<<" ";
        }
        for(int star=1;star<=n;star++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}