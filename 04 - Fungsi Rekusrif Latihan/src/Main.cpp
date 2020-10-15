#include <iostream>

using namespace std;

long faktorial(long userInput);
void print(long angkaInput);

int main(){
    cout << "Latihan Fungsi Rekusrif" << endl;
    cout << "Program Menghitung Faktorial" << endl;

    long n;
    cout << "Masukkan angka : ";
    cin >> n;
    
    print(faktorial(n));

    cin.get();
    return 0;
}

long faktorial(long userInput){
    if (userInput == 1){
        return userInput;
    } else {
        return userInput * faktorial(userInput - 1);
    }
}

void print(long angkaInput){
    cout << "Hasil dari faktorial adalah : " << angkaInput << endl; 
}