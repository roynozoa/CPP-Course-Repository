#include <iostream>
#include <array>

using namespace std;

void inputNilai(array<int,10> inputArray);
void tampilNilai(array<int,10> inputArray);

const array<int,10> nilaiArray;

int main(){
    cout << "Hello World" << endl;
    cout << "My Name is Roy" << endl;
    cout << "Program Latihan Array" << endl;
    inputNilai(nilaiArray);
    cout << endl;
    cout << "Grafik nilai ";
    for(int i = 0; i<= nilaiArray.size(); i++){
        if (i==0){
            cout << "0-9 :";
        } else if (i>0 && i<10){
            cout << i*10 << "-" << (i*10) + 9 << " :";
        } else {
            cout << "100 :";
        }
        for (int j = 0; j < nilaiArray[i]; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cin.get();
    return 0;
}

void inputNilai(array<int,10> inputArray){
    for(int i = 0; i<= inputArray.size(); i++){
        cout << "Jumlah mahasiswa dengan nilai ";
        if (i==0){
            cout << "0-9 :";
        } else if (i>0 && i<10){
            cout << i*10 << "-" << (i*10) + 9 << " :";
        } else {
            cout << "100 :";
        }
        cin >> inputArray[i];
    }
}

void tampilNilai(array<int,10> inputArray){
    cout << "Grafik nilai ";
    for(int i = 0; i<= inputArray.size(); i++){
        if (i==0){
            cout << "0-9 :";
        } else if (i>0 && i<10){
            cout << i*10 << "-" << (i*10) + 9 << " :";
        } else {
            cout << "100 :";
        }
        for (int j = 0; j < inputArray[i]; j++){
            cout << "*";
        }
        cout << endl;
    }
}
