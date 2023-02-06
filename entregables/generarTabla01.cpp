#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int randInt(const int a, const int b) {
    srand(time(nullptr));
    return a + rand() % (b - a +1);
}

int main(int numArg, char* v[]) {
    if (numArg == 4){
        int numeros = atoi(v[1]);
        int inicial = atoi(v[2]);
        int final = atoi(v[3]);
        cout << "De nuevo Numeros: " << numeros << " Inicial: " << inicial << " final: " << final << endl;
        unsigned i,j = 0;
        while() {
            while(j < 10) {

            }
        }
        return 0;
    } else
    {
        return 1;
    }
    
}