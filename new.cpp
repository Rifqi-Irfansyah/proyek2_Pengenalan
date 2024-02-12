#include <iostream>
using namespace std;

    void nilai (int *y)
    {
        cout << "alamat parameter : " << y << endl;
        cout << "nilai parameter : " <<  *y << endl;
    }

    void kuadrat(int *z)
    {
        *z = *z * *z;
    }

int main ()
{
    int x;
    cout << "Masukkan nilai: ";
    cin >> x;
    nilai (&x);
    cout << "Angka : " << x << endl;

    kuadrat(&x);
    cout  << "Kuadrat dari angka di atas adalah : " << x << endl;
    cout << "Alamat dari vaiaber x = "<<&x << endl;
}