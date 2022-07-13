#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int *p=new int[n];
    for(int i=0;i<n;++i){

    
    cin>>*(p+i);
    
    for(int i=0;i<n;++i){
        cout<<"Output of marks"<<endl;
        cout<<i+1<<*(p+i)<<endl;

    }
    delete [] p;
    }
    




    return 0;
}