#include "node.hpp"

Node::Node() { this->c = 0; }
Node::Node(double c) { this->c = c; }
double Node::W(double x, double y) 
{ 
  /**
   * y = Wx + c
   * -> W = (y - c) / x
   **/
  return ( (y - c) / x ); 
}
