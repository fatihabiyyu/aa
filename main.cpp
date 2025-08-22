#include <iostream>
using namespace std;
string nama;
int umur;
string alamat;
string handphone;

int main() {
    cout << "masukan nama anda ";
    cin >> nama;
    // cout << "hello " << nama << "\n";
    cout << "masuka umur anda ";
    cin >> umur;
    // cout << "age " << umur << endl;
    cout << "masukan alamat anda ";
    cin >> alamat;
    // cout << "address " << alamat << endl;
    cout << "masukan jenis handphone anda ";
    cin >> handphone;
    // cout << "address " << alamat << endl;
    cout << "halo " << nama << "\numur nya " << umur << " y.o " << " \nhandphone " << handphone << " \nalamatnya " << alamat << endl;
    return 0;
}