#include <iostream>
using namespace std;
int LinearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key)
        return 1;
        }

        return 0;
}
int main(){
    int arr[]={10,20,40,30,50};
    if(LinearSearch(arr,5,50)==1){
        cout<<"Element found";
    }else{
        cout<<"Element not found";
    }


}