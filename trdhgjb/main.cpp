#include <iostream>

using namespace std;

int global_read;

// proiect anul 2 facultate info - java :D
// autor Bogdan Draghici - Politehnica (nu FMI) (FMI rocks!!)
// https://github.com/Bogdanull/



int suma_anul_2(int a, int b){
    int c;
    c = a + b;

    return c;
}

void citeste_date(int &citit){
    cout << "trebuie citit" << endl;
    cin >> citit;
    cin >> global_read;
}

int main()
{

    int citit;
    citeste_date(citit);
    cout << "am citit " << citit << endl;

    cout << "suma: " << suma_anul_2(citit, global_read) <<  endl;
    return 0;
}
