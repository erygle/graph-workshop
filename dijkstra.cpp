#include<bits/stdc++.h>

using namespace std;
#define ii pair<int,int>
//seçilen ilk nodeun uzaklığını çok büyük bir değer alıyoruz
//çünkü en küçük değerleri seçeceğimiz için bu değeri aslında
//temp bir değer olarak gibi kabul edebiliriz
const int INF = 1e9;

vector<int> dijkstra(vector<vector<pair<int,int>>>&adj,int nodes,int startingNode);

int32_t main(){
    int nodes,edges;
    cout<<"Node adedini girin: ";
    cin>>nodes;
    cout<<"Kenar adedini girin: ";
    cin>>edges;
    
    vector<vector<ii>>adj(nodes+1);
    
    for(int i=0 ; i<edges ; i++){
        int x,y,w;
        cin>>x>>y>>w;
        adj[x].push_back({w,y});
        adj[y].push_back({w,x});
    }

    int startingNode;
    cout<<"Baslangic nodeu girin: ";
    cin>>startingNode;

    vector<int>shortest_way = dijkstra(adj,nodes+1,startingNode);
    
    for(int i=1 ; i<=nodes ; i++)
        cout<<startingNode<<" -> "<<i<<" : "<<shortest_way[i]<<endl;
return 0;
}

vector<int> dijkstra(vector<vector<pair<int,int>>>&adj,int nodes,int startingNode){
    //büyükten küçüğe değerleri tutan bir queue oluşturuyoruz
    priority_queue<ii,vector<ii>,greater<ii>>pq;
    //başlangıç nodeunu seçiyoruz
    vector<int>from_begin(nodes,INF);

    from_begin[startingNode]=0;
    pq.push({0,startingNode});

    while(!pq.empty()){
        int curr = pq.top().second;
        int dist = pq.top().first;
        pq.pop();

        if(dist > from_begin[curr])continue;
        //bağlantısı olan nodeu ve uzaklığını eski değere ekleyip karşılaştırma işlemini yapıyoruz
        //küçük olan değer pq'ya aktarılıyor
        for(auto x : adj[curr]){
            if(x.first + from_begin[curr] < from_begin[x.second]){
                from_begin[x.second] = x.first + from_begin[curr];
                pq.push({from_begin[x.second],x.second});
            }
        }
    }
    return from_begin;
}
