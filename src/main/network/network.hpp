#ifndef NN_NETWORK

class Network {
  private:
    int depth;
    int no_of_inputs;
    double **matrix;
    double **setMatrix(int no_of_inputs, int depth);
  public:
    Network(int no_of_inputs, int depth);
    void display();
};

#define NN_NETWORK
#endif