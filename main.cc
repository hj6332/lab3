#include <iostream>
#include "math_func.h"

using namespace std;

int main(int argc, char ** argv)
{
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    float c=atof(argv[4]);
    func(a,b, argv[3], c);
    cout << argc << endl;
    cout << argv[1] << " " << argv[2] << " "<< argv[3]<<" " << argv[4] << endl;
    cout << func(atoi(argv[1])) << " " << func(atoi(argv[1]), atoi(argv[2]), argv[3]) << " ";
    cout << c << endl;
}


