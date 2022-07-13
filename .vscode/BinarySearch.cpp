#include <iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key){
    int start=0;
    int end=n;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
        return mid;
        }else if(arr[mid]>key){
            end=mid-1;
        }else{
            start=mid+1;
        }
        
         

    } 
    return -1;
    
}
    



int main(){
    int arr[]={10,20,30,40,50,60,70,80};
    int n=8;
     cout<<BinarySearch(arr,n,40);
     return 0;


}
