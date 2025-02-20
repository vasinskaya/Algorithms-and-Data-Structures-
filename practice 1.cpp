// practice 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//// подключение библиотеки для работы 
//// с потоком ввода-вывода
//#include <iostream> 
//
//// подключение заголовочного файла
//// Windows API, который предоставляет 
//// доступ к функциям и возможностям 
//// операционной системы
//#include <Windows.h>
//
//// подключение пространства имен std
//using namespace std;
//
//// главная функция приложения
//int main()
//{
//    // вызов функции для отображения 
//    // кириллицы
//    setlocale(LC_ALL, "rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    // объявление вещественных переменных
//    int a, b, sum, diff, prod;
//    double quotient;
//
//    // вывод подсказки для пользователя
//    cout << "Введите два числа: ";
//
//    //  считывание информации с консоли
//    cin >> a >> b;
//
//    // выполнение вычислений
//    sum = a + b;
//    diff = a - b;
//    prod = a * b;
//    quotient = 1.0 * a / b;
//
//    // вывод информации на консоль
//    cout << "а + b = " << sum << endl;
//    cout << "а - b = " << diff << "\n";
//    cout << "а * b = " << prod << "\n";
//    cout << "а / b = " << quotient << "\n";
//
//}

// главная функция приложения
//int main()
//{
//    // вызов функции для отображения 
//    // кириллицы
//    setlocale(LC_ALL, "rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//} 



//#include <iomanip>
//#include <cmath>
//
//// подключение пространства имен std
//using namespace std;
//
//int main()
//{
//    // вызов функции для отображения 
//    // кириллицы
//    setlocale(LC_ALL, "rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    cout << fixed << setprecision(20);
//
//    double a = 0.1 + 0.2;
//
//    cout << "0.1 + 0.2 = " << a << endl;
//
//    if (a == 0.3) cout << "Числа равны" << endl;
//    else cout << "Числа не равны" << endl;
//
//    double e = 1e-9;
//    if (abs(a - 0.3) < e) cout << "Числа равны" << endl;
//    else cout << "Числа не равны" << endl;
//
//
//}

//#include <iostream> 
//#include <Windows.h>
//#include <iomanip>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//    // вызов функции для отображения 
//    // кириллицы
//    setlocale(LC_ALL, "rus");
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//
//    cout << fixed << setprecision(20);
//
//    double a = 1e+9;
//    double b = 1e-9;
//
//    double res = a + b - a;
//
//    cout << res << endl;
//
//}

#include <iostream> 
#include <Windows.h>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    // вызов функции для отображения 
    // кириллицы
    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << 2 * 2 * 2 << endl;
    cout << pow(2, 3) << endl;

    double a = 10.8346;

    cout << "Округление вверх " << ceil(a) << endl;
    cout << "Округление вниз " << floor(a) << endl;
    cout << "Округление по правилам математики " 
        << round(a) << endl;

}