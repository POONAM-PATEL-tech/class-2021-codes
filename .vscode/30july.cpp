#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int count=0;
    int count1=0;
    for(int i=0;i<5;i++){
        
            if(arr[i]%2==0){
            count=count+1;           

        }else{

            count1=count1+1;
        }
    }
    cout<<count;  
    cout<<count1;  
    return 0;
}