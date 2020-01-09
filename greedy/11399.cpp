#include <iostream>
#include <algorithm>

#define MAX 100

using namespace std;

 int N;

int person[MAX];

int main(){
    cin >> N;
    for (int i = 0; i < N; i++)
         cin >> person[i];
       
    sort(person, person + N); //오름차순 정렬을 하면 최소 시간

    int time = 0;
    
    for (int i = 0; i < N; i++)
         for (int j = 0; j <= i; j++)
             time += person[j];

    cout << time << endl;
    
    return 0;

}