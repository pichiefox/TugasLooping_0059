#include <iostream>
using namespace std;

// Variabel global
int n, pilihan;

// Function untuk cek bilangan prima
bool bilPrima(int n) {
    if (n <= 1) return false;

    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

// Function untuk cek bilangan Fibonacci
bool bilFibonacci(int n) {
    int a = 0, b = 1, c = 0;

    while (c < n) {
        c = a + b;
        a = b;
        b = c;
    }

    if (c == n || n == 0) return true;
    return false;
}

// Prosedur input
void input() {
    cout << "Masukkan angka: ";
    cin >> n;
}

// Prosedur output hasil
void outputPrima() {
    if (bilPrima(n))
        cout << n << " adalah bilangan prima\n";
      else
        cout << n << " bukan bilangan prima\n";
}

void outputFibonacci() {
    if (bilFibonacci(n))
        cout << n << " termasuk bilangan Fibonacci\n";
    else
        cout << n << " bukan bilangan Fibonacci\n";
}

// Function menu
void menu() {
    cout << "\n==== Cek Bilangan ====\n";
    cout << "1. Cek Bilangan Prima\n";
    cout << "2. Cek Bilangan Fibonacci\n";
    cout << "0. Keluar\n";
    cout << "Pilih menu: ";
}