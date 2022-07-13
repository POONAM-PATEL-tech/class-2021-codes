#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<((char)(j+64));
        }
        cout<<endl;
    }
    cout<<"The next Pattern will be below"<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<((char)(i+64));
        }
        cout<<endl;
    
}
 cout<<"The next Pattern will be below"<<endl;
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
            cout<<((char)(n-i+1+64));
        }
        cout<<endl;
    
}
cout<<"The next Pattern will be below"<<endl;
    for(i=n;i>0;i--){
        for(j=1;j<=i;j++){
            cout<<((char)(i+64));
        }
        cout<<endl;
    
}
return 0;
}