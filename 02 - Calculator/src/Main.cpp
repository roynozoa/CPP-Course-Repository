#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    float hasil;
    char aritmatika;
    bool loop = true;
    char lanjut;

    cout << "===== PROGRAM KALKULATOR SEDERHANA =====\n\n" << endl;
    while(loop){
        cout << "Maskkan Angka 1 :";
        cin >> a;
        cout << "Masukkan Operator (+, -, *, /) : ";
        cin >> aritmatika;
        cout << "Masukkan Angka 2 :";
        cin >> b;

        switch (aritmatika){
            case '+':
                hasil = a + b;
                break;
            case '-':
                hasil = a - b;
                break;
            case '*':
                hasil = a * b;
                break;

            case '/':
                hasil = a / b;
                break;

            default:
            cout << "Operator salah, harap masukan operator yang sesuai (+, -, *, /)";
            break;
        }
        cout << "Hasil perhitungan " << a << aritmatika << b << " Adalah : " << hasil << endl;
        cout << "Apakah anda ingin melanjutkan program (y/n) = " << endl;
        cin >> lanjut;

        switch (lanjut){
            case 'y':
                loop = true;
                break;
            case 'n':
                loop = false;
                break;
            default :
                loop = false;
                break;
        }
    }

    cout << "END PROGRAM" << endl;
    cin.get();
    return 0;
}