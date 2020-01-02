  #include <iostream>
#include <vector>
#include <algorithm>
#define MAX 51

using namespace std;



int map[MAX][MAX] = {0};
bool check[MAX][MAX] = {false};
int _dx[4] = {0, 0, -1, 1};
int _dy[4] = {1, -1, 0, 0};  
int cnt = 0;

void verify(){
    
}
void dfs_func(int dx, int dy){
    int start =  map[dx][dy];
    check[dx][dy] = true;
    
    for(int i = 0; i<4; i++){
        int ddx = dx + _dy[i];
        int ddy = dy + _dx[i];
        
        if(map[ddy][ddx] = true)
            dfs_func(ddy,ddx);
    } 

}
void bug_count(int whe_row, int whe_col){
    for(int i = 0; i< whe_row; i++){
        for(int j = 0; j < whe_col; j++){
            if(map[i][j] == 1){
                dfs_func(i,j);
            }
        }
    }
}

int main(){
    int T,k;
    int row,col;
    int whe_row,whe_col;
    
    cin >> T ;
    cin >> whe_row >> whe_col >> k;

    for(int i= 0; i < k; i++){ 
            cin >> row >> col;
            map[row][col] = 1;
        }

    for(int i= 0; i < whe_row; i++ ){
        for (int j = 0; j<whe_col; j++){
            bug_count(whe_row,whe_col);
            cnt++;
        }
    }


    return 0;
}
    