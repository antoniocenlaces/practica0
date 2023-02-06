#include <iostream>
#include <iomanip>
#include <ctime>
// #include <cstdlib>

using namespace std;

int randInt(const int a, const int b) {
    return a + rand() % (b - a +1);
}

int main(int numArg, char* v[]) {
    if (numArg == 4){
        srand(time(nullptr));
        int numeros = atoi(v[1]);
        int inicial = atoi(v[2]);
        int final = atoi(v[3]);
        // cout << "De nuevo Numeros: " << numeros << " Inicial: " << inicial << " final: " << final << " args: " << numArg << endl;
        // cout << "Prueba de randInt " << randInt(inicial, final) << endl;
        unsigned i= 0;
        unsigned j = 0;
        while (i < numeros) {
            // cout << "Entro en bucle 1; i=" << i<<endl;
            while(j < 10 && i < numeros) {
                // cout << "Entro en bucle 2; j=" << j<<endl;
                cout << setw(8) << randInt(inicial, final);
                j++;
                i++;
            }
            cout << endl;
            j = 0;
        }
        return 0;
    } else
    {
        return 1;
    }
    
}