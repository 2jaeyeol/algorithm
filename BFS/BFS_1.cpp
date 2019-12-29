#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

void bfs_func(int start,vector<int> graph[],bool check[]){
    queue<int> q;

    q.push(start);
    check[start] = true;

    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        cout << tmp << " ";

        for(int i=0; i< graph[tmp].size(); i++){
            if(check[graph[tmp][i]] == false){
                q.push(graph[tmp][i]);
                check[graph[tmp][i]] = true;
            }
        }
    }
}

int main(){
    int n,m,start;

    cin >> n >> m >> start;

    vector<int> graph[n+1];
    bool check[n+1];
    fill(check, check+n+1, false);

    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=1; i<=n; i++){
        sort(graph[i].begin(),graph[i].end());
    }

    bfs_func(start,graph,check);
    return 0;
}