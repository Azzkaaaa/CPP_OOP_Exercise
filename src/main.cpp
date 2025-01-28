#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        int IPK;
};

int main(int argc, char const *argv[]){
    Mahasiswa data1;
    data1.nama = "Azka";
    data1.NIM = "12345";
    data1.jurusan = "IF";
    data1.IPK = 3;
    cout << "Nama saya adalah: " << data1.nama << endl;
    cout << "NIM: " << data1.NIM << endl;
    cout << "Jurusan: " << data1.jurusan << endl;
    cout << "IPK: " << data1.IPK << endl;
    return 0;
}

