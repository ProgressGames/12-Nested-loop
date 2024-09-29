#include <iostream>
using namespace std;
//Вложенный цикл | Nested loop

int main() {

    setlocale(LC_ALL, "RUS");
    
    for (int i = 1; i < 5; i++)
    {
        cout << "Сработал 1 цикл for,итерация № "<< i << endl;

        for (int j = 1; j < 5; j++)
        {
            cout << "\tСработал 2 цикл for, итерация № " << j << endl;

            
        }
    }
    
}
