#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&graph, int startingNode);

int32_t main(){
    int nodes,edges;
    cout<<"Node adedini girin: ";
    cin>>nodes;
    cout<<"Kenar adedini girin: ";
    cin>>edges;

    vector<vector<int>> graph(nodes+1);

    for(int i=0; i<edges; i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i=1 ; i<=nodes ; i++){
        cout<<"Node "<<i<<": ";
        dfs(graph, i);
        cout<<endl;
    }
return 0;
}

void dfs(vector<vector<int>>&graph, int startingNode){
    int size=graph.size();
    vector<bool> visited(size+1, false);
    stack<int> st;

    st.push(startingNode);
    bool first=true;

    while (!st.empty()){
        int curr = st.top();
        st.pop();
        if(!visited[curr]){
            visited[curr]=true;
            if (!first)cout << " -> ";
            cout << curr;
            first = false;
            sort(graph[curr].begin(),graph[curr].end());
            for(auto neighbor : graph[curr])
                if(!visited[neighbor])
                    st.push(neighbor);
        }
    }
}