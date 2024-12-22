#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    int size,edges;

    cout << "Node adedini girin: ";
    cin >> size;
    cout << "Kenar adedini girin: ";
    cin >> edges;

    vector<vector<int>> graph(size+1);

    for(int i=0 ; i<edges ; i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i=1 ; i<=size ; i++){
        cout << "Node " << i << ": ";
        for(auto &k : graph[i])
            cout<<k<<" ";
        cout << endl;
    }
return 0;
}