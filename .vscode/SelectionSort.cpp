#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Size of Array"<<endl;   //size of array
    cin>>n;
    int arr[n];
    cout<<"insert element to array"<<endl;
    for(int i=0;i<n;i++){  //insert element to the array
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){    //condition to find minimum
            int temp=arr[j];     //Swapping the element
            arr[j]=arr[i];
            arr[i]=temp;

            }
        }
    }
    cout<<"Sorted Array"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"->";     //print the sorted array
    }

    return 0;




}