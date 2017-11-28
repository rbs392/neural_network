#include<iostream>
#include "node/node.hpp"
#include "network/network.hpp"


int main(int argc, char *argv[])
{
  Node *n = new Node();
  std::cout << n->W(4, 1) << std::endl;

  Network *nn = new Network(3,3);
  nn->display();




  return 0;
}