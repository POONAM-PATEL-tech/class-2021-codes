#include <iostream>
using namespace std;
void insert(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void insertion(int arr[],int n){
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>current){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    insert(arr,n);
    insertion(arr,n);
    print(arr,n);
    return 0;
}