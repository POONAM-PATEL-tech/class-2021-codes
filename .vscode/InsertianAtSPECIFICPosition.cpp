#include <iostream>
using namespace std;
int main(){
    int marks[]={1,2,3,4,5};
    int length=5;
    int position=3;
    for(int i=length-1;i>=position-1;i--){
        marks[i+1]=marks[i];
        
    }
    marks[position-1]=20;
    length=length+1;
    for(int i=0;i<length;i++){
        cout<<marks[i]<<" ";
    }
    
}
