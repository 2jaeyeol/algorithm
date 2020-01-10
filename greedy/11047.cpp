#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int N,K;
    int arr[11];
    int cnt = 0;
    cin >> N >> K;

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
        
    for( int i= N-1; i>=0; i--){
        if(K >= arr[i]){
            cnt += K/arr[i];
            K = K % arr[i];
        }
    }
    
    cout << cnt;

      return 0;

}
