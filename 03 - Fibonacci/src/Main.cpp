#include <iostream>

using namespace std;
int main(){
    int n;
    int f_n = 1;
    int f_n1 = 1;
    int f_n2 = 0;

    cout << "Hello World" << endl;
    cout << "Program Deret Fibonacci" << endl;
    cout << "Masukkan nilai ke-n: ";
    cin >> n;

    for (int i = 1; i < n; i++){
        //cout << f_n << endl;
        f_n = f_n1 + f_n2;
        f_n2 = f_n1;
        f_n1 = f_n;
    }

    cout << "Deret fibonaci ke" << n << " adalah = " << f_n << endl;

    cin.get();
    return 0;
}
