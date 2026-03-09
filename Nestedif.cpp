#include <iostream>
using namespace std;

float Rata_rata(float a, float b)
{
    return (a + b) / 2;
}

int main()
{
    float nilBI, nilMT, rerata;

    cout << "Masukkan nilai Bahasa Inggris = ";
    cin >> nilBI;

    cout << "Masukkan nilai Matematika = ";
    cin >> nilMT;

    rerata = Rata_rata(nilBI, nilMT);

    cout << "Nilai rerata = " << rerata << endl;
}