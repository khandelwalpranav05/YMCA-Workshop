#include <iostream>
#include <list>
#include <map>

using namespace std;

class Graph{

	map<int,list<int> > adjList;
public:
	void addEdge(int u,int v,bool bidir = true){
		adjList[u].push_back(v);

		if(bidir){
			adjList[v].push_back(u);
		}
	}

	void display(){
		for(auto vertex:adjList){

			int node = vertex.first;

			cout<<node<<" -> ";

			for(auto edge:vertex.second){
				cout<<edge<<",";
			}

			cout<<endl;
		}
	}
};

int main(){

	Graph g;

	g.addEdge(1,2);
	g.addEdge(2,3);
	g.addEdge(3,1);

	g.display();

	return 0;
}