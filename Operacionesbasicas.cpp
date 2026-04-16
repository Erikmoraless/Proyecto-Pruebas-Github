#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n1 = 0;
    int n2 = 0;
    int rs = 0;
    int rr = 0;
    int rm = 0;
    float rd = 0;
    
    // Ingresar los datos
    cout << "Introduce el primer numero: ";
    cin >> n1;
    
    cout << "Introduce el segundo numero: ";
    cin >> n2;
    
    // Realizar las operaciones
    rs = n1 + n2;
    rr = n1 - n2;
    rm = n1 * n2;
    
    // Mostrar resultado de las operaciones
    cout << "Resultado de la suma: " << rs << endl;
    
    cout << "Resultado de la resta: " << rr << endl;
    
    cout << "Resultado de la multiplicacion: " << rm << endl;
    
    // Validar division
    if (n2 != 0) {
        rd = (float) n1 / n2;
        cout << "Resultado de la division: " << rd << endl;
    } else {
        cout << "No es posible dividir entre 0." << endl;
    }

    return 0;
}
