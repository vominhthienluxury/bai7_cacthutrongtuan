// bai7_cacthutrongtuan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int so;
    cout << "nhap so:  ";
    cin >> so;
    switch (so)
    {
    case 2:
        cout << "thu hai"; 
        break;
    case 3:
        cout << "thu ba";
        break;
    case 4:
        cout << "thu tu";
        break;
    case 5:
        cout << "thu nam";
        break;
    case 6:
        cout << "thu sau";
        break;
    case 7:
        cout << "thu bay";
        break;
    case 8:
        cout << "chu nhat";
        break;
    default:
        cout << "sai so";
        return 0;
    }
}