#ifndef BisectionMethod_h
#define BisectionMethod_h

typedef double(*FuncType)(double);

double getRoot(FuncType funcType, double valx, double valy, double epsilon = 0.01);

#endif