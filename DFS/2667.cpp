#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <vector <int>> map;
bool check;

int idx[4][2] = { {-1,0}, {1,0}, {0,-1}, {0,1} };

int N,cnt;

bool bound(int x,int y){
    return (x>=0 && x<N) && (y>=0 && y<N);
}

void dfs_func(int x, int y, int start){
    int start = map[x][y];
    for(int i=0; i< 4; i++){
        int dx = x + idx[i][0];
        int dy = y + idx[i][1];
    
        if(bound(dx,dy) && map[dx][dy] == 1){
            dfs_func(dx, dy, cnt+1);
        }
    }

}


void find(int N){
    for(int i=0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(map[i].at(j) == 1){
                // 얘를 START로 주고
                cnt++;
                dfs_func(i, j, cnt+1);
            }
        }
    }  
}

int main(){
    cin >> N;
    
    for(int i = 0; i < N; i++){
        for(int j =0; j < N; j++){
            int a;
            cin >> a;
            map[i].push_back(a);
        }
    }

    find(N);
    cout << cnt << endl;
}