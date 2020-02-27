#include <iostream>

using namespace std;

int main() {

    double val[15];

    for(int i = 0; i <= 14; i++){
        cout << "Informe o " << i + 1 << " valor: " << endl;
        cin >> val[i];
    }

    double total = 0;
    for(int i2 = 0; i2 <= 14; i2++){
        total += val[i2];
    }
    
    cout << fixed;
    cout << "A media aritmetica e: " << (total / 15) << endl;

    return 0;
}

