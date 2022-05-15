#include <iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vector_pares;
    int suma=0;
    float promedio;

    for (int i = 2; i <= 60; i+=2)
    {
        vector_pares.push_back(i);
        suma+=i;
    }
    promedio=suma/vector_pares.size();
    cout<<"\nSuma: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
    return 0;
}
