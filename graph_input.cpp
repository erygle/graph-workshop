#include <iostream>
#include <vector>

using namespace std;

int main() {
    int nodes, edges;
    cout << "Node sayısını girin: ";
    cin >> nodes;
    cout << "Kenar sayısını girin: ";
    cin >> edges;

    vector<vector<int>> adjList(nodes);

    cout << "Kenarları girin (u, v şeklinde): " << endl;
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for (int i = 0; i < nodes; ++i) {
        cout << "Node " << i << ": ";
        for (int v : adjList[i]) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
