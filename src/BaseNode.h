/*
 *  BaseNode.h : Contains the declaration of the virtual class BaseNode
 *
 *  Created on: Mar 16, 2017
 *  Author: Christian Hardy-Cardinal
 *  
 *  Date       Initials Description
 *  ---------- -------- -------------------------------------------
 *  2017-04-02 KMLF     Addition of the type variable and Enum
 */

#ifndef BASENODE_H_
#define BASENODE_H_

#include <iostream>
#include <typeinfo>

class BaseNode{
	public:
		// Since we cannot get the type on runtime (despite our many attempts)
		// we decided to go for an enum for the type of the node to do the proper casting.
		enum Types {st, //string
					i,  // int
					d,  // double
					b,  // bool
					f,  // float
					l,  // long
					s,  // short
					c,  // char,
					g,  // Graph
					e,  // Edge
					bN, // BaseNode
					nSt,// Node<string>
					nI, // Node<int>
					nD, // Node<double>
					nB, // Node<bool>
					nF, // Node<float>
					nL, // Node<long>
					nS, // Node<short>
					nC, // Node<char>
					nG, // Node<Graph>
					nE, // Node<Edge>
					nBn,// Node<BaseNode>
		};
		BaseNode(); // Default Constructor
		BaseNode(Types type); // Constructor with parameters
		BaseNode(const BaseNode &b); // Copy Constructor
		virtual ~BaseNode(); // Destructor
		Types getType(); // Returns node type
		void setShown(bool shown); // Sets shown
		bool isShown(); // Returns shown
	protected:
		Types type;
		bool shown;
		
};



#endif /* BASENODE_H_ */
