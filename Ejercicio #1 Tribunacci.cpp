#include <iostream>
#include <vector>  
using namespace std;

vector<double> tribonacci(vector<double> signature, int n) {
    
    if (n == 0) return vector<double>();  
    
    vector<double> result;
    for (int i = 0; i < n && i < 3; i++) {
        result.push_back(signature[i]);
    }

    for (int i = 3; i < n; i++) {
        double next_value = result[i - 1] + result[i - 2] + result[i - 3];
        result.push_back(next_value);
    }

    return result;
}

int main() {

    vector<double> signature;
    signature.push_back(0);  
    signature.push_back(1);  
    signature.push_back(1);  
    
    int n;
    cout << "Ingrese la cantidad de numeros de la secuencia Tribonacci que desees: ";
    cin >> n;
    
    vector<double> result = tribonacci(signature, n);
    
    for (size_t i = 0; i < result.size(); i++) {  
        cout << result[i] << " ";
    }
    cout << endl;
    
    return 0;
}


