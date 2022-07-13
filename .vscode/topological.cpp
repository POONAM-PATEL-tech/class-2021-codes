#include<iostream>
#include<queue>
#include <unordered_map>
#include <vector>
#include <stack>
using namespace std;
int graph0[5][5] = {{0,1,1,1,1},
					{1,0,1,1,1},
					{1,1,0,1,1},
					{1,1,1,0,1},
					{1,1,1,1,0}};
                    
int graph1[5][5]		={{0,0,1,0,0},
				   {1,0,0,0,0},
				   {0,0,0,1,0},
				   {0,1,0,0,1},
				   {0,0,0,0,0}};

int graph[6][6] = {{0,0,1,1,0,0},
                   {0,0,0,0,0,0},
                   {0,0,0,0,0,0},
                   {0,1,0,0,0,0},
                   {0,1,1,0,0,0},
                   {1,0,1,0,0,0}};
void dfs(int source,int visited[],stack<int>& stk){
    //static int visited[5]={0,0,0,0,0};
    if(visited[source]==0){
//cout<<source<<" ";
        visited[source]=1;
        for(int v=0;v<6;v++){
            if(graph[source][v]==1 && visited[v]==0){
                dfs(v,visited,stk);
               
            }
        }
       
    }
      stk.push(source);
}
void topologicalSort(){
    stack<int> stk;
    int visited[6] {0};
    for(int i=0;i<6;i++)
    visited[i]=0;
    for (int i = 0; i < 6; i++)
        if (visited[i] == 0)
        dfs(i,visited,stk);
    while(stk.empty()==0){
       cout<<stk.top()<<" ";
        stk.pop();
    }
}
int main(){
    topologicalSort();
}