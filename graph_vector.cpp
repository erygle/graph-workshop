#include<bits/stdc++.h>

using namespace std;

int32_t main(){
    int size,edges;

    /*toplam kullanacağımız node sayısını ve bunların kaç adet bağlantısı olacağını tanımlıyoruz*/
    cout << "Node adedini girin: ";
    cin >> size;
    cout << "Kenar adedini girin: ";
    cin >> edges;
    //index değerlerinin sıfırdan başlaması mantığı olaraktan eğerki
    //1 den 6 ya kadar node değerlerimiz olacaksa girdiğimiz size adedi + 1
    //dememiz gerekiyor aksi takdirde 1 den 6 ya değil 0 dan 5 e giriş olmalı
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