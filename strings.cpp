// strings.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

int main()
{

    int  k, m, b, n, year, balls;
    string surname = "", name = "";
    int kol = 0;
    cin >> k >> m >> b >> n;
    for (int i = 0; i < n; i++) {
        cin >> surname >> name >> year >> balls;
        if (year <= m and year >= k and balls == b) {
            cout << surname << " " << name << endl;
            kol++;
        }
    }
    cout << kol;

}


