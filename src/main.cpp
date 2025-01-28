#include <iostream>
#include <string>

using namespace std;

// Method adalah sebuah fungsi
class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;
        int IPK;

        Mahasiswa(string inputNama, string inputNIM, string inputJurusan, int inputIPK){// Constructor (Termasuk Methods)
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
            Mahasiswa::IPK = inputIPK;
            // cout << "Nama: " << Mahasiswa::nama << endl;
            // cout << "NIM: " << Mahasiswa::NIM << endl;
            // cout << "Jurusan: " << Mahasiswa::jurusan << endl;
            // cout << "IPK: " << Mahasiswa::IPK << endl;
        }

        void tampilkanMahasiswa(){// Methods tanpa parameter dan return
            cout << "Nama: " << Mahasiswa::nama << endl;
            cout << "IPK: " << Mahasiswa::NIM << endl;
            cout << "Jurusan: " << Mahasiswa::jurusan << endl;
            cout << "IPK: " << Mahasiswa::IPK << endl;
            cout << "\n" << ends;
        }

        void ubahNama(const char* namaBaru){// Methods dengan parameter tanpa return
            Mahasiswa::nama = namaBaru;
        }

        string getNama(){// Methods tanpa parameter dengan return
            return Mahasiswa::nama;
        }

        int getIPK(){// Methods tanpa parameter dengan return
            return Mahasiswa::IPK;
        }

        int katrolIPK(const int &tambahanNilai){// Methods dengan 22nya
            return Mahasiswa::IPK + tambahanNilai;
        }
};

// Methods di luar class
// void tampilkanMahasiswa(Mahasiswa data){
//     cout << data.nama << endl;
//     cout << data.NIM << endl;
//     cout << data.jurusan << endl;
//     cout << data.IPK << endl;
// }


int main(int argc, char const *argv[]){
    Mahasiswa data1 = Mahasiswa("Azka", "12345", "IFFF", 3);
    Mahasiswa data2 = Mahasiswa("Hello", "12345", "IFFF", 5);
    data1.tampilkanMahasiswa();
    data2.tampilkanMahasiswa();

    data2.ubahNama("World");
    data2.tampilkanMahasiswa();

    cout << "data nama: " << data1.getNama() << endl;
    cout << "IPK: " << data1.getIPK() << endl;
    cout << "Katrol IPK: " << data1.katrolIPK(1) << endl;
    return 0;
}

