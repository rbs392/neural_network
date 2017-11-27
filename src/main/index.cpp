#include<iostream>
#include "node/node.hpp"


int main(int argc, char *argv[])
{
  Node *n = new Node();
  std::cout << n->W(4, 1) << std::endl;
  return 0;
}