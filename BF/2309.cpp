#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector < int > height;
vector < int > result;
int sum = 0;
int cnt = 1;

void BF() {
    for (int i = 0; i < 9; i++) {
        sum = sum + height[i];
        result[i] = height[i];
        cnt++;

        if (cnt > 7) {
            BF();
        }

        if (sum = 100) {
            for (int i = 0; i < 7; i++) {
                cout << result[i] << endl;
            }
            result.clear();
        }

    }

}

int main() {
    int ht;
    for (int i = 0; i < 9; i++) {
        cin >> ht;
        height.push_back(ht);
    }

    BF()
}
