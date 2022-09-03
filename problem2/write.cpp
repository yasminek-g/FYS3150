#include <iostream>
#include <fstream>

using namespace std;

void WriteToFile(string name, pair< vector<double>, vector<double> > data)
//Input: 
// - name: filename (as "filename.txt")
// - data: tuple pair of vectors (of equal length)
{
    ofstream myfile;
    myfile.open(name.c_str());

    //Define length of vectors in pair
    int n = data.first.size();

    for (int i = 0; i < n; i++){
        myfile << defaultfloat << setw(10) << left << data.first[i] 
        << scientific << setprecision(5) << setw(10) << left << data.second[i]
        << "\n";
    }

    myfile.close();
}