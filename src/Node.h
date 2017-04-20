/*
 *  Node.h : Contains the function declaration and implementation of the node
 *  		 Since it is a template, implementation has to be in the same file.
 *
 *  Created on: Mar 16, 2017
 *  Author: Christian Hardy-Cardinal
 *  
 *  Date       Initials Description
 *  ---------- -------- -------------------------------------------
 *  
 */

#ifndef NODE_H_
#define NODE_H_

#include "BaseNode.h"

using namespace std;

template<typename T>

class Node: public BaseNode{
	public:
		Node():BaseNode(){ // Default Constructor
			
		}
		Node(Types type, T value): BaseNode(type){ // Constructor with parameters
			this->value = value;
		}
		Node(const Node &node){ // Copy Constructor
			this->value = node.value;
		}
		~Node(){ // Destructor
			cout << "Node destroyed" << endl;
		}
		friend ostream& operator <<(ostream& os, const Node<T>& s){ // cout operator
			os << s.value;
			return os;
		}
		T getValue(){ // Returns the value
			return value;
		}
		void setValue(T value){ // Sets the value
			this->value = value;
		}
	private:
		T value; // Information/label of the node
};



#endif /* NODE_H_ */
