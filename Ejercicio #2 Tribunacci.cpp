#include <iostream>
#include <vector>  
using namespace std;

int calcularPuntuacion(const vector<int>& numeros) {
    int puntuacion = 0;
    
    for (int i = 0; i < numeros.size(); i++) {
        int num = numeros[i];
        
        if (num == 5) {
            
            puntuacion += 5;
        } else if (num % 2 == 0) {
            
            puntuacion += 1;
        } else {
            
            puntuacion += 3;
        }
    }
    
    return puntuacion;
}

int main() {
    
    vector<int> numeros;
    int n, valor;

    cout << "Ingrese la cantidad de numeros que quiere en la matriz: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Ingresa el numero " << i+1 << ": ";
        cin >> valor;
        numeros.push_back(valor);
    }

    int resultado = calcularPuntuacion(numeros);
    
    cout << "La puntuacion total es: " << resultado << endl;
    
    return 0;
}

