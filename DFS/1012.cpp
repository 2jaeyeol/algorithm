#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bug_count(){

}

int main(){
    int T;
    int row,col;

    cin >> T >> row >> col;
    vector <vector <int>> map;

    for(int i=0; i<col; i++){
        for (int j =0; j<row;j++){
            map[col].push_back(row);
        }
    }
    
}