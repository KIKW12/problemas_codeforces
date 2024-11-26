#include <iostream>
#include <vector>
using namespace std;

string check_love_triangle(int n, const vector<int>& f) {
    vector<vector<int>> graph(n + 1);

    for (int i = 1; i <= n; ++i) {
        int liked = f[i - 1];
        graph[i].push_back(liked);
    }

    for (int i = 1; i <= n; ++i) {
        int b = graph[i][0];
        int c = graph[b][0];
        int a = graph[c][0];
        if (a == i) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int n;
    cin >> n;
    vector<int> f(n);

    for (int i = 0; i < n; ++i) {
        cin >> f[i];
    }
    cout << check_love_triangle(n, f) << endl;
    return 0;
}
