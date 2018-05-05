/*
 * graph.h
 *
 *  Created on: Mar 5, 2018
 *      Author: alan
 */

#ifndef GRAPH_GRAPH_H_
#define GRAPH_GRAPH_H_

#include <vector>

namespace graph_struct {

class node{
	int source;
	int destination;
public:
	node(int source, int destination) : source(source), destination(destination) {}
	int getSource() {return source;}
	int getDestination() {return destination;}
};

class graph {
	int size;
	std::vector<std::vector<node *>> grapharray;
	void DFSUtils(int start, std::vector<bool> &check);
public:
	graph(int size);
	virtual ~graph();
	void createNode(int source, int destination);
	void BFS(int start);
	void DFS(int start);
};

} /* namespace graph_struct */

#endif /* GRAPH_GRAPH_H_ */
