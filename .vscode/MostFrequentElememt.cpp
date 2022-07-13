#include <iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,10,10};
    int n=5;
    int count=0;
    int element=0;
    for(int i=0;i<n;i++){
        int tempcount=0;
        int tempelement=arr[i];
        for(int p=0;p<n;p++){
            if(arr[p]==tempelement){
                tempcount++;
            }
            if(tempcount>count){
                element=tempelement;
                count=tempcount;
            }
        }
        //cout<<"Element"<<" "<<element<<"Count"<<" "<<count;
    }
    cout<<"Element"<<" "<<element<<"Count"<<" "<<count;
    return 0;
}