// fibonacci_ricorsivo.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//Iachimovschi Mihai

#include <iostream>

using namespace std;

unsigned long long fibonacci(int a);

int main()
{
    bool chiudi = false;
    int n;

    while (!chiudi) {
        system("cls");
        cout << "Inserisci un numero: ";
        cin >> n;

        if (n != 0)
            cout << "il " << n << " numero di Fibonacci e:\t" << fibonacci(n) << endl;
        else
            chiudi = true;

        system("pause");
    }
}

unsigned long long fibonacci(int a) {
    if (a < 3)
        return 1;
    else
        return fibonacci(a - 1) + fibonacci(a - 2);
}
