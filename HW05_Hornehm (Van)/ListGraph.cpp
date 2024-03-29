#include "ListGraph.h"

//Constructor from CSE 274
ListGraph::ListGraph(int numNodes){
	edgeList.resize(numNodes);
	//numNodes= 0;
}

/*
   * Add a weighted, undirected edge between nodes u and v.
   * 
   * Preconditions: 
   *     u and v are legal labels (i.e. 0 <= u < G.size(), 0 <= v < G.size())
   *     u != v
   *     There is no edge between u and v.
   *     weight > 0
   */
void ListGraph::addEdge(NodeID u, NodeID v, EdgeWeight weight){
	Elist::const_iterator it;
	if( 0 <= u < edgeList.size() && 0 <= v < edgeList.size()){
		if(u != v){
			if(weight > 0){
				for(it = edgeList[u].begin(); it !=edgeList[u].end(); it++){
					if(edgeList[u]->first == v && edgeList[u]->second == weight){
						return false;
					}
				}
			}
		}
	}
	edgeList[u].push_back(NWPair(v,weight));
	edgeList[v].push_back(NWPair(u, weight));
	num_edges++;
}
//Code from CSE 274
EdgeWeight ListGraph::weight(NodeID u, NodeID v) const{
	edgeList[u];
	EList::const_iterator it;
	for(it = edgeList[u].begin(); it!=edgeList[u].end(); it++){
		NWPair theEdge = *it;
		if(theEdge.first == v){
			return theEdge.second;
		}
	}
}

//Code from CSE 274
std::list<NWPair> ListGraph::getAdj(NodeID u) const{
	return edgeList[u];
}

unsigned ListGraph::degree(NodeID u) const{
	return edgeList[u].size();
}

unsigned ListGraph::size() const{
	return edgeList.size();
}

unsigned ListGraph::numEdges() const{
	return num_edges;
}


