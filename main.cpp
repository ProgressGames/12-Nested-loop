#include <iostream>
using namespace std;
//вложенные циклы

int main() {

    setlocale(LC_ALL, "RUS");
    
    for (int i = 1; i < 99; i++)
    {
        cout << "Сработал 1 цикл for,итерация № "<< i << endl;

        for (int j = 1; j < 99; j++)
        {
            cout << "\tСработал 2 цикл for, итерация № " << j << endl;

            
        }
    }
    
}