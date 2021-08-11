#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<cstring>
using namespace std;

template<typename T>
class Graph{
    map<T, list<T>> m;

public:

    void addEdge(int  x,int y){    // there is an edge btwn x to y
        m[x].push_back(y);
        m[y].push_back(x); 
    }

    void bfs(T src){
        map<T, bool> visited;
        queue<T> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            T node = q.front();
            q.pop();
            cout << node << " ";
            
            // push its adjecent node
            // first chech whether it is visited or not
            for(auto x:m[node]){
                if(visited[x]==false){
                    q.push(x);
                    visited[x] = true;
                }
            }
        }
    }
};

int main(){
   Graph<int> g;
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.bfs(0);
	return 0;
}