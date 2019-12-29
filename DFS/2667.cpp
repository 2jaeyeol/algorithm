#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector <int>> map;

int idx[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

void dfs_func(int x, int y){
    int start = map[x][y];
    for(int i=0; i< 4; i++){
        int dx = x + idx[i][0];
        int dy = y 
    }

}


void find(int N){
    for(int i=0; i < N; i++){
        for(int j = 0; j < N; j++)
            if(map[i].at(j) == 1){
                // 얘를 START로 주고
                dfs_func(i,j);
                }
            }  
    }
}

int main(){
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j =0; j < N; j++){
            int a;
            cin >> a;
            map[i].push_back(a);
        }
    }

    find(N);
}