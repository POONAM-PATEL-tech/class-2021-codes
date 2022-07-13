#include <iostream>
using namespace std;
void EndDelete(int arr[],int size){
    int pos=6;
    for(int i=pos-1;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    cout<<"New Size :"<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    EndDelete(arr,size);

}