#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    // ===== Задача номер 1 =====
    setlocale(LC_ALL, "Russian");

    // --- Вычисления с типом float ---
    float af = 1000.0f;
    float bf = 0.0001f;
    float cf;

    float chis_f = (af - bf) * (af - bf) * (af - bf) - (af * af * af - 3 * af * af * bf);
    float znam_f = bf * bf * bf - 3 * af * bf * bf;

    cf = chis_f / znam_f;

    cout << "при типе float результат = " << cf << endl;

    // --- Вычисления с типом double ---
    double ad = 1000;
    double bd = 0.0001;
    double cd;

    double chis_d = (ad - bd) * (ad - bd) * (ad - bd) - (ad * ad * ad - 3 * ad * ad * bd);
    double znam_d = bd * bd * bd - 3 * ad * bd * bd;

    cd = chis_d / znam_d;

    cout << "при типе double результат = " << cd << endl << endl;

    // ===== Задача номер 2 =====
    double m = 3;
    double n = 4;

    // 1) - -m - ++n
    m = 3; n = 4;
    cout << "Значение первого выражения (- -m - ++n) равно " << (- -m - ++n) << endl;

    // 2) m*n < n++
    m = 3; n = 4;
    cout << "Значение второго выражения (m*n < n++) равно " << (m * n < n++) << " (0-неверно,1-верно)" << endl;

    // 3) n-- > m++
    m = 3; n = 4;
    cout << "Значение третьего выражения (n-- > m++) равно " << (n-- > m++) << " (0-неверно,1-верно)" << endl;

    return 0;
}