#include <iostream>
#include "vector"
using namespace std;

int main()
{
    vector<int> arreglo;
    for(int i=1;i<=100;i++)
    {
        arreglo.push_back(i);
    }
    for(int i=arreglo.size()-1;i>=0;i--)
    {
        cout<<arreglo[i]<<endl;
    }
    return 0;
}
