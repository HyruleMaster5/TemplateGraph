/*
 *  Graph.h : Contains the function definition of the graph
 *
 *  Created on: Mar 1, 2017
 *  Author: Christian Hardy-Cardinal
 *  
 *  Date       Initials Description
 *  ---------- -------- -------------------------------------------
 *  
 */

#ifndef GRAPH_H_
#define GRAPH_H_

#include "Edge.h"
#include "Node.h"
#include <vector>

class Graph{
	public:
		Graph(); // Default Constructor
		Graph(bool directed); // Constructor with direction
		Graph(unsigned int count, unsigned int edgeCount, vector<BaseNode*> nodes, vector<string> types, vector<Edge*> edges, bool directed); // Constructor with parameters
		Graph(const Graph &g); // Copy Constructor
		~Graph(); // Destructor
		bool isDirected(); // Checks if the graph is a directed one
		void setDirected(bool directed); // Sets if the graph is directed or not
		int getNodeCount(); // Returns the number of nodes
		int getEdgeCount(); // Returns the number of edges
		void addNode(BaseNode* node); // Adds a node
		void removeNode(BaseNode* node); // Removes the indicated node and shifts the others
		void addEdge(Edge* e); // Adds an edge
		void removeEdge(Edge* e); // Removes the indicated edge and shifts the others
		void printUnconnectedNodes(); // Print every unconnected nodes
		void printNode(BaseNode* n); // Print the value of a specific node
		void print(); // Print the graph information
		void printPathFromNode(BaseNode* n); // Print the possible paths from a specific node
		bool edgeExists(Edge* e); // Tests if an edge is part of the graph
		bool nodeExists(BaseNode* n); // Tests if a node if part of the graph
		template<typename T> bool valueContained(T value, BaseNode::Types type){ // Tests if a certain value if contained
			for(size_t i = 0; i < nodeCount; i++){
				if(type == nodes[i]->getType()){
					if(static_cast<Node<T>*>(nodes[i])->getValue() == value){
						return true;
					}
				}
			}
			return false;
		}
	private:
		unsigned int nodeCount; // Keeps the number of nodes
		unsigned int edgeCount; // Keeps the number of edges
		vector<BaseNode*> nodes;
		vector<string> types;
		vector<Edge*> edges; // Keeps all the edges
		bool directed; // States if the graph is directed or not
};

#endif /* GRAPH_H_ */
