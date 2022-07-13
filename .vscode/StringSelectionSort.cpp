#include <iostream>
using namespace std;
void sort(string str[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(str[j]<str[i]){
                string temp=str[j];
                str[j]=str[i];
                str[i]= temp;

            }
        }
    }
}
void print(string str[],int n){
    for(int i=0;i<n;i++){

        cout<<str[i]<<endl;
    }
}

int main(){
    int n=5;
    
    string str[n]={"adfg","sdf","efg","jgh","bfd"};
    sort(str,n);
    print(str,n);


    

    return 0;
}
