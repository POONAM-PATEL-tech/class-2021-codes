#include <iostream>
#include <vector>
using namespace std;
   void addedge(int v,int w,vector<int> arr){
      arr[v].push_back(w)
   }

int main(){
    int n=5;
    int m=5;
    vector<int> arr[n][m];
    addedge(0,1,arr[n][m]);
    return 0;
}