/*
 * graph.cpp
 *
 *  Created on: Mar 5, 2018
 *      Author: alan
 */

#include <list>
#include <iostream>
#include "graph.h"

namespace graph_struct {

graph::graph(int size) {
	this->size = size;
	this->grapharray = std::vector<std::vector<node *>>(size);
	for(std::vector<std::vector<node *>>::iterator i = this->grapharray.begin() ; i != grapharray.end() ; ++i){
		*i = std::vector<node *>();
	}
}

graph::~graph() {}

void graph::createNode(int source, int destination) {
	node *tmp = new node(source, destination);
	this->grapharray[source].push_back(tmp);
}

void graph::BFS(int start) {
	std::vector<bool> check(this->size);
	std::list<int> queue;
	for(std::vector<bool>::iterator i = check.begin() ; i != check.end() ; ++i){
		*i = false;
	}
	queue.push_back(start);
	check[start] = false;
	while(queue.size() != 0) {
		int source = queue.front();
		queue.pop_front();
		std::cout << source << " " << std::endl;
		for(std::vector<node *>::iterator i = this->grapharray[source].begin() ; i != this->grapharray[source].end(); ++i){
			if(check[(*i)->getDestination()] == false) {
				queue.push_back((*i)->getDestination());
				check[(*i)->getDestination()] = true;
			}
		}
	}

}

void graph::DFSUtils(int start, std::vector<bool> &check) {
	std::cout << start << " " << std::endl;
	for(std::vector<node *>::iterator i = this->grapharray[start].begin() ; i != this->grapharray[start].end(); ++i){
		if(check[(*i)->getDestination()] == false) {
			check[(*i)->getDestination()] = true;
			DFSUtils((*i)->getDestination(), check);
		}
	}
}

void graph::DFS(int start) {
	std::vector<bool> check(this->size);
	for(std::vector<bool>::iterator i = check.begin() ; i != check.end() ; ++i){
		*i = false;
	}
	DFSUtils(0, check);
}

} /* namespace graph_struct */
