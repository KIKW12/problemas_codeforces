#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<int> balloons(26, 0);
        int total_balloons = 0;
        
        for (char c : s) {
            int index = c - 'A';
            total_balloons++;
            if (balloons[index] == 0) {
                total_balloons++;
            }
            balloons[index]++;
        }
        cout << total_balloons << endl;
    }
    return 0;
}
