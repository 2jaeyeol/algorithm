#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector < int > height;
vector < int > result;
int sum = 0;
int cnt = 1;

void BF(int a, int b) {
    for(int i=0; i< height.size(); i++){
        if(i == a || i ==b)
            continue;
        else
        {
            cout << height.at(i) << endl;
        }
        
    }   
}

int main() {
    int ht;
    for (int i = 0; i < 9; i++) {
        cin >> ht;
        height.push_back(ht);
        sum += height[i];
    }
    
    sort(height.begin(), height.end());
    for (int i = 0; i < 9; i++) {
        for(int j=i+1; j<9; j++){
            if(sum - height[i] - height[j] == 100){
                BF(i,j);
            }
        }
    }
}

