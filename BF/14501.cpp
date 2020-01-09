#include <iostream>
#include <algorithm>

using namespace std;
int time[16];
int profit[16];
int value = 0;

void solve(int now, int sum , int plus_sum){
    
}

int main(){
    int N;

    cin >> N;

    for(int i = 1; i<=N; i ++)
        cin >> time[i] >> profit[i];

    for(int i=1; i<=N; i++)
        solve(i,0,0);
}