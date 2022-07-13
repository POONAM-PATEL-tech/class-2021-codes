#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int *a1=&a;
    int *b1=&b;
    int *c1=&c;
    
    if(a>b && a>c){
        cout<<a1<<endl;
        cout<<a<<endl;
    }else if(b>c && b>a){
        cout<<b1<<endl;
        cout<<b<<endl;
    }else{
        cout<<c1<<endl;
        cout<<c<<endl;
    }


    return 0;
}