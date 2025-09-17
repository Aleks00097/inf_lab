     #include <iostream>
     #include <iomanip>
     #include <cmath>
     #include <locale.h>
     #ifdef _WIN32
     #endif
     using namespace std;
int main() {
     setlocale(LC_ALL, "");
     #ifdef _WIN32
     #endif
     double X1, X2, delta;
     unsigned int N;
     cout << "Введiть початкове значення X1: ";
     cin >> X1;
     cout << "Введiть кiнцеве значення X2: ";
     cin >> X2;
     cout << "Введiть крок delta: ";
     cin >> delta;
     if (delta <= 0 || X2 < X1) {
     cout << "Помилка введення даних!" << endl;
     return 1;
}
     N = (unsigned int)((X2 - X1) / delta) + 1;
     cout << "\nПочатковi данi:\n";
     cout << "X1 = " << X1 << ", X2 = " << X2 << ", delta = " << delta << endl;
     cout << "Кiлькiсть точок N = " << N << endl << endl;
     cout << "+-----+---------+------------------+" << endl;
     cout << "|  i  |    x    |       f(x)       |" << endl;
     cout << "+-----+---------+------------------+" << endl;
     unsigned int counter = 0;
     double x = X1;
     for (unsigned int i = 1; i <= N; i++, x += delta) {
     double fx = -3 * pow(x, 6)
     - 10 * pow(x - 30, 5)
     + 12 * pow(x, 4)
     + 5 * pow(x, 3)
     - 10;
     cout << "| " << setw(3) << i
     << " | " << setw(7) << fixed << setprecision(2) << x
     << " | " << setw(16) << fixed << setprecision(4) << fx
     << " |" << endl;
cout << "+-----+---------+------------------+" << endl;
counter++;
     if (counter == 10 && i != N) {
     cout << "Press Any Key to Continue ..." << endl;
     #ifdef _WIN32
     #else
     cin.get();
     #endif
     counter = 0;}
}
     return 0;
}
