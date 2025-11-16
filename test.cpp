#include <iostream>

using namespace std;
int main(){
cout << "alksfh" << endl;

    int a1 = -4;    // первый член прогрессии
    int d = 3;      // разность прогрессии (от -4 до -1: +3, от -1 до 2: +3, от 2 до 5: +3)
    int n = 4;      // количество членов прогрессии
    
    // Формула суммы арифметической прогрессии: Sn = n/2 * (2*a1 + (n-1)*d)
    int sum = n * (2 * a1 + (n - 1) * d) / 2;
    
    cout << "Сумма прогрессии: " << sum << endl;
    
    // Альтернативный способ - прямым вычислением
    int sum_alt = 0;
    for (int i = 0; i < n; i++) {
        sum_alt += a1 + i * d;
    }
    
    cout << "Сумма (проверка): " << sum_alt << endl;
    
    return 0;
}