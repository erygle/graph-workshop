#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    int size,edges;

    cout << "Node adedini girin: ";
    cin >> size;
    cout << "Kenar adedini girin: ";
    cin >> edges;

    vector<pair<int,int>> graph(size+1);

    for(int i=0 ; i<edges ; i++){
        int x,y;
        cin>>x>>y;
        graph.push_back({x, y});
        graph.push_back({y, x});
    }

    for(int i = 1; i <= size; i++){
        cout << "Node " << i << ": ";
        for(auto &k : graph)
            if(k.first == i)
                cout << k.second << " ";
        cout << endl;
    }
return 0;
}