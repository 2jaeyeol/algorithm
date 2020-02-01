#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    bool space = true;
    int cnt = 0;
    
    for (int i = 0; i < s.length(); i++){
        if (s[i] == ' ')
            space = true;
        else if (space){
            space = false;
            cnt++;
        }
    }
    cout << cnt << "\n";

    return 0;
}