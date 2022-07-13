#include <iostream>
using namespace std;
#define size 5;

int front[size]={-1,-1,-1,-1,-1};
int rear[size]={-1,-1,-1,-1,-1};
int pq[size][size];
void insert(){
    cout<<"Enter the number to be inserted:";
    int temp;
    cin>>temp;
    cout<<"Enter thr priority";
    int p;
    cin>>p;
    p--;
    if(rear[p]==size-1)
    {
        cout<<"overflow";
    }else{
        if(rear[p]==-1){
            front[p]=0;
            rear[p]=0;
        }
        else{
            rear[p]++;
        }
        pq[p][rear[p]]=temp;
        cout<<"element inserted";
    }
}
void delete(){
    if(rear[i==front[i]-1])
    {
        cout<<"underflow";
        i++;
    }
    else{
        cout<<pq[i][front[i]];
        front[i]++;
    }
}
int main(){
    insert();
    delete();
    return 0;
}