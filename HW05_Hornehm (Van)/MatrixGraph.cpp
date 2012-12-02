#include "MatrixGraph.h"

//I'm sort of guessing at what this needs to be for now
MatrixGraph::MatrixGraph(unsigned num_nodes){
	M.resize(num_nodes);
	//numNodes = 0;
}

void MatrixGraph::addEdge(NodeID u, NodeID v, EdgeWeight weight){
}

EdgeWeight MatrixGraph::weight(NodeID u, NodeID v) const{
	return;
}

std::list<NWPair> MatrixGraph::getAdj(NodeID u) const{
}

unsigned MatrixGraph::degree(NodeID u) const{
}

//Again, guessing
unsigned MatrixGraph::size() const{
	return M.size();
}

//guessing again
unsigned MatrixGraph::numEdges() const{
	return num_edges;
}
