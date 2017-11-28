#include "network.hpp"
#include<iostream>

Network::Network(int no_of_inputs, int depth)
{
  this->depth = depth;
  this->no_of_inputs = no_of_inputs;
  this->matrix = this->setMatrix(no_of_inputs, depth);
  this->edges = this->setEdges(no_of_inputs, depth);
}

double** Network::setMatrix(int no_of_inputs, int depth)
{
  /*
  This can be optimized by using linked list/ array
  */
  int dimension = no_of_inputs + (depth * no_of_inputs);
  double **matrix = new double*[dimension];
  
  for(int i=0; i<dimension; i++) {
    matrix[i] = new double[dimension];
    for(int j=0; j<dimension; j++){
      int hlayer = i/no_of_inputs;
      int vlayer = j/no_of_inputs;
      if((hlayer == vlayer+1) || (vlayer == hlayer+1))
        matrix[i][j] = 1;
      else
        matrix[i][j] = 0;
    }
  }
  return matrix;
}

double** Network::setEdges(int no_of_inputs, int depth)
{
  int dimension = no_of_inputs*depth + no_of_inputs;
  double **edges = new double*[dimension];
  for(int i=0; i<dimension; i++) {
    edges[i] = new double[no_of_inputs*2];
    int counter = 0;
    for(int j=0; j<dimension; j++){
      edges[i][j] = -1;
      int hlayer = i/no_of_inputs;
      int vlayer = j/no_of_inputs;
      if((hlayer == vlayer+1) || (vlayer == hlayer+1))
        edges[i][counter++] = j;
        
    }
  }
  return edges;
}

void Network::display() {
  int dimension = no_of_inputs + (depth * no_of_inputs);
  for(int i=0; i<dimension; i++) {
    for(int j=0; j<dimension; j++) {
      std::cout << matrix[i][j] << "\t";
    }
    std::cout << std::endl;
  }

  std::cout << "edges" << std::endl;
  
  for(int i=0; i<dimension; i++) {
    for(int j=0; j<no_of_inputs*2; j++) {
      std::cout << edges[i][j] << "\t";
    }
    std::cout << std::endl;
  }


}