// fibonacci_ricorsivo.cpp : Questo file contiene la funzione 'main', in cui inizia e termina l'esecuzione del programma.
//Iachimovschi Mihai

#include <iostream>

using namespace std;

int fibonacci(int a);

int main()
{
    int n;

    cout << "Inserisci un numero: ";
    cin >> n;

    cout << "il " << n << " numero di Fibonacci e:\t" << fibonacci(n) << endl;
   
}

int fibonacci(int a) {
    if (a < 3)
        return 1;
    else
        return fibonacci(a - 1) + fibonacci(a - 2);
}
