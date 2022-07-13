#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int star1=1;star1<=i;star1++){
            cout<<"*";
        }
        for(int spaces=2*n-2*i;spaces>0;spaces--){
            cout<<" ";
        }
        for(int star2=1;star2<=i;star2++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--){
        for(int star1=1;star1<=i;star1++){
            cout<<"*";
        }
        for(int spaces=2*n-2*i;spaces>0;spaces--){
            cout<<" ";
        }
        for(int star2=1;star2<=i;star2++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
