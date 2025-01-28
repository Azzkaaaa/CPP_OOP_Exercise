#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        int IPK;

        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, int inputIPK){//Constructor
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;
            cout << "Nama: " << Mahasiswa::nama << endl;
            cout << "NIM: " << Mahasiswa::NIM << endl;
            cout << "Jurusan: " << Mahasiswa::jurusan << endl;
            cout << "IPK: " << Mahasiswa::IPK << endl;
        }
};

class Polos{
    public:
        string data_string;
        int data_integer;
};

int main(int argc, char const *argv[]){
    Mahasiswa data1 = Mahasiswa("Azka", "12345", "IF", 3);
    return 0;
}

