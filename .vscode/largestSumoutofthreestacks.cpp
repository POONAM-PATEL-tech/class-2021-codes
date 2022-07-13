#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int LSumOfThree(int stack1[],int stack2[],int stack3[],int n1,int n2,int n3){
    int sum1=0;
    int sum2=0;
    int sum3=0;
    for(int i=0;i<n1;i++){
        sum1=sum1+stack1[i];
    }
    for(int i=0;i<n2;i++){
        sum2=sum2+stack2[i];
    }
    for(int i=0;i<n3;i++){
        sum3=sum3+stack3[i];
    }
    int top1=0;
    int top2=0;
    int top3=0;
    while(1){
        if(top1==n1|| top2==n2 || top3==n3){
            return 0;
        }
        if(sum1==sum2 && sum2==sum3) {
            return sum1;
        }
        if(sum1>=sum2 && sum1>=sum3){
            sum1=sum1-stack1[top1++];
        }
        if(sum2>=sum1 && sum2>=sum3){
            sum2=sum2-stack2[top2++];
        }
        if(sum3>=sum1 && sum3>=sum2){
            sum3=sum3-stack3[top3++];
        }
    }
    
}
int main(){
    int stack1[]={1,1,2,3,4};
    int stack2[]={1,2,3,4};
    int stack3[]={1,2,3,4};
    int n1=5;
    int n2=4;
    int n3=5;
    cout<<LSumOfThree(stack1,stack2,stack3,n1,n2,n3)<<endl;

    return 0;
}
