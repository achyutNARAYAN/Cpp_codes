#include <bits/stdc++.h>
using namespace std;

vector<string> findThePattern(int n) {
        vector<string> result;
        string temp = "";
        int k = 0;
        for (int i = 0; i < n; i++) {
            temp = "";
            for (int j = 0; j < n; j++) {
                if (i != 0 && i != n - 1 && j != 0 && j != n - 1) {
                    temp += '$';
                } else {
                    char c = 'A' + k;
                    temp += c;
                    k = (k + 1) % 26; 
                }
            }
            result.push_back(temp);
        }
        return result;
    }

int main() {
    cout<<"Finding the pattern...\n";
    findThePattern(30);
    return 0;
}