/*
 *  BaseNode.cpp : Contains the implementation of the BaseNode
 *
 *  Created on: Mar 28, 2017
 *  Author: Christian Hardy-Cardinal
 *  
 *  Date       Initials Description
 *  ---------- -------- -------------------------------------------
 *  
 */

#include "BaseNode.h"

BaseNode::BaseNode(){
	type = s;
	shown = false;
}
BaseNode::BaseNode(Types type){
	this->type = type;
	shown = false;
}
BaseNode::BaseNode(const BaseNode &b){
	type = b.type;
	shown = b.shown;
}
BaseNode::~BaseNode(){
	
}
BaseNode::Types BaseNode::getType(){
	return type;
}
void BaseNode::setShown(bool shown){
	this->shown = shown;
}
bool BaseNode::isShown(){
	return shown;
}
