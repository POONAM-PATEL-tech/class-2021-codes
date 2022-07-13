#include <iostream>
using namespace std;
void End(int arr[],int size){
    int pos=6;
     for(int i=size-1;i>=pos-1;i--){
         arr[i+1]=arr[i];
     }
     arr[pos-1]=20;
     size++;
     cout<<"Size of new Array"<<size<<endl;
     for(int i=0;i<size;i++){
         cout<<arr[i]<<" ";
     }
}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    End( arr, size);
}
