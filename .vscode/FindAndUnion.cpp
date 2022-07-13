#include<iostream>
#include<bits/stdc++.h>
using namespace std;
const int N=100;
vector<int>parent(N);
vector<int>size(N);
void make_set(int v){
    parent[v]=v;
    size[v]=1;
}
int find(int v){
    if(v==parent[v]){
        return v;
    }else{
        return find(parent[v]);
    }
}
void union(int a,int b){
    a=find(a);
    b=find(b);
    if(a!=b){
       if(size(a)<size(b));
       swap(a,b);
       parent[b]=a;
       size(a)+=size(b);
    }
}
int main(){
    for(int i=0;i<N;i++){
        make_set(i);
    }
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edges;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }
   // sort(edges.begin(),edges.end());
   for(auto i:edges){
       int w=i[0];
       int u=i[1];
       int v=i[2];
       int x=find[u];
       int y=find[v];
       if(x==y){
           continue;
       }else{
           cout<<u<<" "<<v<<endl;
           union(u,v);
       }

   }
    
    return 0;

}