#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    int nodes, edges;
    cout<<"Node adedini girin: ";
    cin>>nodes;
    cout<<"Kenar adedini girin: ";
    cin>>edges;

    vector<vector<pair<int,int>>> graph(nodes+1);

    //x ve y node, w aralarındaki uzaklık
    for(int i=0; i<edges; i++){
        int x, y, w;
        cin>>x>>y>>w;
        graph[x].push_back({y, w});
        graph[y].push_back({x, w});
    }

    for(int i=1; i<=nodes; i++){
        cout<<"Node "<<i<<": ";
        for(auto &k : graph[i])
            cout<<"("<<k.first<<"->"<<k.second<<")";
        cout<<endl;
    }
return 0;
}