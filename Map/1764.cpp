#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
 using namespace std;

 map<string,int> mp;

 int main(){
    int n,m;
    string s;
    vector<string> V;

    cin >> n >> m;

    while(n--){
        cin >> s;
        mp[s]++;
    }

    while(m--){
        cin >> s;
        mp[s]++;
    }

    for(auto it : mp){
        if(it.second ==2){
            V.push_back(it.first);
        }
    }

    sort(V.begin(),V.end());

    cout << V.size() << "\n";

    for(auto it : V){
        cout << it << "\n";
    }

    return 0;
 }