#include <iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int count1=0;
    int count2=0;
    int size=6;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0){
            cout<<count1+1;
        }else{
            cout<<count2+1;
        }
    }
    return 0;
}