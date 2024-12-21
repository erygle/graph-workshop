#include <iostream>
#include <vector>

using namespace std;

int main() {
    int V = 5;
    vector<vector<int>> graph(V);

    //edges
    graph[0].push_back(1);
    graph[1].push_back(0);

    graph[0].push_back(4);
    graph[4].push_back(0);
    
    graph[1].push_back(2);
    graph[2].push_back(1);
    
    graph[1].push_back(3);
    graph[3].push_back(1);
    
    graph[1].push_back(4);
    graph[4].push_back(1);

    graph[2].push_back(3);
    graph[3].push_back(2);

    for (int i = 0; i < V; ++i) {
        cout << "Node " << i << ": ";
        
        for (int v : graph[i]) cout << v << " ";
        
        cout << endl;
    }
return 0;
}
