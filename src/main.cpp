#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Method adalah sebuah fungsi
class Mahasiswa{
    public:
        string nama;
        string NIM;
        string jurusan;

        Mahasiswa(string inputNama, string inputNIM, string inputJurusan){// Constructor (Termasuk Methods)
            Mahasiswa::nama = inputNama;
            Mahasiswa::NIM = inputNIM;
            Mahasiswa::jurusan = inputJurusan;
        }

        string turnString(){
            return nama + " " + NIM + " " + jurusan + "\n";
        }
};

class DataBase{
    public:
        ifstream in;
        ofstream out;
        string fileName;

        DataBase(const char* fileName){
            DataBase::fileName = fileName;
        }

        void save(Mahasiswa data){
            DataBase::out.open(DataBase::fileName, ios::app);
            
            DataBase::out << data.turnString();

            DataBase::out.close();
        }

        void tampilkanDataBase(){
            DataBase::in.open(DataBase::fileName, ios::in);
            string nama, NIM, jurusan;
            int i;
            i = 1;
            while (!DataBase::in.eof()){
                DataBase::in >> nama;
                DataBase::in >> NIM;
                DataBase::in >> jurusan;
                cout << i++ << "." << endl;
                cout << nama << endl;
                cout << NIM << endl;
                cout << jurusan << endl;
            }
            DataBase::in.close();
        }
};


int main(int argc, char const *argv[]){
    string nama, NIM, jurusan;
    cout << "Masukkan Data Mahasiswa" << endl;
    cout << "Nama: ";
    cin >> nama;
    cout << "NIM: ";
    cin >> NIM;
    cout << "Jurusan: ";
    cin >> jurusan;


    Mahasiswa dataMahasiswa = Mahasiswa(nama, NIM, jurusan);
    DataBase dataBase = DataBase("Data.txt");

    dataBase.tampilkanDataBase();
    return 0;
}

