#include <iostream>

using namespace std;

struct NODE{
    int l, r;
}n[10000];

void Order(int k){
    if(k == 0) return ;
    Order(n[k].l);
    Order(n[k].r);
    cout << k << endl;
}

int main(){
    int root;
    cin >> root;
    int num;

    while(cin >> num){
        int cur = root;
        while(1){
            if(num < cur){
                if(n[cur].l != 0) 
                    cur = n[cur].l;
                else{
                    n[cur].l = num;
                    break;
                }
            }
            else{
                if(n[cur].r != 0) 
                    cur = n[cur].r;
                else{
                    n[cur].r = num;
                    break;
                }
            }
        }
    }
    Order(root);
    return 0;
}