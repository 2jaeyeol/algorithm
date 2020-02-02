#include <algorithm>
#include <iostream>
 
#define MAX 16
 
using namespace std;
 
int N;
int time[MAX] = {0};
int profit[MAX] = {0};
int max_val = 0 ;
 
void solve(int day, int sum, int added_num){
    if(day == N + 1 ){
        max_val = max(max_val, sum);
        return ;
    }
    else if (day > N + 1){
        max_val = max(max_val, sum-added_num);
        return ;
    }
        for ( int i = day + time[day] ; i <= N + time[day] ; i++)
        solve(i, sum + profit[day] , profit[day]);
}
 
int main(){
    cin >> N;
    
    for ( int i = 1 ; i <= N; i++){
        cin >> time[i]  >> profit[i] ;
    }
    
    for ( int i = 1 ; i <= N ; i++)
        solve(i, 0, 0);
    
    cout << max_val;
    return 0;
}