#include "calculate.cpp"
#include "write.cpp"

int main()
{
    //Declaring start, end, step parameters:
    double start = 0;
    double end = 1;
    double step = 50;

    //Declaring boundary conditions:
    //u(0) = 0 and u(1) = 0
    pair<double, double> bound;
    bound.first = 0;
    bound.second = 0;

    pair< vector<double>, vector<double> > data = ExactSolution(start, end, step, bound);
    WriteToFile("data.txt", data);

}