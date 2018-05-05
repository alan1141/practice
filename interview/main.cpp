/*
 * main.cpp
 *
 *  Created on: Mar 4, 2018
 *      Author: alan
 */

#include <iostream>
#include <vector>
#include "sort/BinarySearch.h"
#include "sort/QuickSort.h"
#include "sort/MergeSort.h"
#include "graph/graph.h"

void binarySearchTestCase();
void quickSortTestCase();
void mergeSortTestCase();
void graphBFSTestCase();
void graphDFSTestCase();

int main(int argc, char *argv[]){
	graphDFSTestCase();
	return 0;
}

void binarySearchTestCase() {
	int array1[] = {1, 2, 3, 4, 5, 6, 8, 20};
	std::cout << search::BinarySearch::search(array1, 8, 1) << std::endl;
}

void quickSortTestCase(){
	int array1[] = {7, 3, 2, 10, 5, 8, 5, 10};
	sort::QuickSort::sort(array1, sizeof(array1)/sizeof(array1[0]));
	for(int i=0 ; i<sizeof(array1)/sizeof(array1[0]) ; ++i) {
		std::cout << array1[i] << " ";
	}
}

void mergeSortTestCase(){
	int array[] = {1, 3, 5, 2, 9, 7, 11};
	int size = sizeof(array)/sizeof(array[0]);
	sort::MergeSort::sort(array, size);
	for(int i=0 ; i<sizeof(array)/sizeof(array[0]) ; ++i) {
		std::cout << array[i] << " ";
	}
}

void graphBFSTestCase(){
	graph_struct::graph graph = graph_struct::graph(8);
	graph.createNode(0, 1);
	graph.createNode(1, 2);
	graph.createNode(1, 3);
	graph.createNode(2, 5);
	graph.createNode(3, 4);
	graph.createNode(5, 4);
	graph.createNode(5, 6);
	graph.createNode(5, 7);
	graph.BFS(0);
}

void graphDFSTestCase() {
	graph_struct::graph graph = graph_struct::graph(8);
	graph.createNode(0, 1);
	graph.createNode(1, 2);
	graph.createNode(1, 3);
	graph.createNode(2, 5);
	graph.createNode(3, 4);
	graph.createNode(5, 4);
	graph.createNode(5, 6);
	graph.createNode(5, 7);
	graph.DFS(0);
}
