#include <iostream>
using namespace std;
void tab(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i])
        {
           int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;  
        }          
        }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n=5;
    int arr[n]={'E','f','A','e','a'};
    
    tab(arr,n);
    print(arr,n);
    for(int i=0;i<n;i++){
        cout<<char(arr[i])<<endl;
    }
    return 0;
}