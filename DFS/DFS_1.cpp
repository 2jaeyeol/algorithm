#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void DFS_recursion(int start, vector<int> graph[], bool check[]){ 

    check[start] = true ;
    cout << start << " " ;

    for(int i=0; i< graph[start].size(); i++){
        int next = graph[start][i];
        if(check[next] == false){
            DFS_recursion(next, graph, check);
        }
    }
}

int main(){

    int n, m, start;
    cin >> n >> m >> start ;

    vector<int> graph[n+1];
    bool check[n+1];
    fill(check, check+n+1, false);

    for(int i=0; i<m ;i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    for(int i=1; i<=n;i++)
        sort(graph[i].begin(), graph[i].end());
    
    DFS_recursion(start, graph, check);
    

    return 0;
}
