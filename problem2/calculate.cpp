#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

double evaluate(double x);

pair< vector<double>, vector<double> > CalculateSolution(double start, double end, double step, pair<double, double> cond)
{
    //Defining vectors
    vector<double> x;
    vector<double> u;

    //Defining step size
    double delta = (end - start)/step;

    //Enter first boundary condition
    x.push_back(start);
    u.push_back(cond.first);

    //Define x values
    for (int i = 1; i < step-1; i++) {
        x.push_back(start + delta*i);
        u.push_back(evaluate(x[i]));
    }
    
    //Enter second boundary condition
    x.push_back(end);
    u.push_back(cond.second);

    return make_pair(x, u);

}

double evaluate(double x)
{
    return 1 - (1 - exp(-10))*x - exp(-10*x);
}

