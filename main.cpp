#include <iostream>
using namespace std;
//��������� �����

int main() {

    setlocale(LC_ALL, "RUS");
    
    for (int i = 1; i < 99; i++)
    {
        cout << "�������� 1 ���� for,�������� � "<< i << endl;

        for (int j = 1; j < 99; j++)
        {
            cout << "\t�������� 2 ���� for, �������� � " << j << endl;

            
        }
    }
    
}