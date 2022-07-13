#include <iostream>
using namespace std;
int main(){
    int a[]={10,2,6,7,3};
    int size=5;
    int pos=3;
    for(int i=pos-1;i<size-1;i++){
        
              a[i]=a[i+1];
              
    }
    size--;
    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;
    }
    cout<<size;
}