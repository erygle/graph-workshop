#include<bits/stdc++.h>

using namespace std;

int32_t main() {
    int size = 5;
    vector<vector<int>> graph(size);

    /*her bir vektörü birbirine bağlıyoruz 
    eğer ki ikinci satırlar olmazsa
    x y'ye bağlı iken y x' bağlı olmaz*/
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

    /*ilk olarak her bir node'un satırına giriyoruz ve burdaki
    değerleri yeni bir for döngüsü kullanarak yazdırıyoruz*/
    for (int i = 0; i < size; ++i) {
        cout << "Node " << i << ": ";
        for (int v : graph[i]) cout << v << " ";
        cout << endl;
    }
return 0;
}
