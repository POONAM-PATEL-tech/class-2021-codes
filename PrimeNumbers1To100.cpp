#include <iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){

            return false;
        }
    }
    return true;
}
int main(){
    int a=2;
    int b=100;
    //cin>>a>>b;
    for(int i=2;i<=100;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}

