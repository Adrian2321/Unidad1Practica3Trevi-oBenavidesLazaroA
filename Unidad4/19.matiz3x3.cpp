#include <iostream>
using namespace std;

int main() {
    int numeros[3][3], num = 0;

    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            numeros[x][y] = num++;
        }
    }

    cout<<"Array original es: \n";
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout<<numeros[x][y] << " ";
        }
        cout << endl;
    }

    cout<<"La matriz traspuesta es: \n";
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            cout<<numeros[y][x]<< " ";
        }
        cout<<endl;
    }
        
	system("PAUSE");
    return 0;
    
}

