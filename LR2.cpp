#include <iostream>
using namespace std;

class LR2 {
public:
    static void Task1() {
        int x, y, otv;
        cout << "Enter x and y value:\n";
        cin >> x;
        cin >> y;
        otv = x + y;
        cout << "x + y = " << otv << "\n";
        otv = x - y;
        cout << "x - y = " << otv << "\n";
        otv = x * y;
        cout << "x * y = " << otv << "\n";
    }
public:
    static void Task2() {
        int x, xCopy = 0;
        cout << "Enter x value:\n";
        cin >> x;
        xCopy = x;
        cout << "x += 7 - " << (x += 7) << "\n";
        x = xCopy;
        cout << "x -= 7 - " << (x -= 7) << "\n";
        x = xCopy;
        cout << "x *= 7 - " << (x *= 7) << "\n";
        x = xCopy;
        cout << "x /= 7 - " << (x /= 7) << "\n";   
    }
public:
    static void Task3() {
        int a1 = 2, a2 = 3, a3 = 4;
        a1 += a2 += a3 = 6;
        cout << "a1 = " << a1 << "\n";
        cout << "a2 = " << a2 << "\n";
        cout << "a3 = " << a3 << "\n";
    }
public:
    static void Task4() {
        int a1 = 212, a2 = 31231, a3 = 4513, a4 = 2311;
        a1++;
        ++a2;
        a3--;
        --a4;
        cout << "a1 = " << a1 << "\n";
        cout << "a2 = " << a2 << "\n";
        cout << "a3 = " << a3 << "\n";
        cout << "a4 = " << a4 << "\n";
    }
};

int main()
{
    LR2::Task3();
}

