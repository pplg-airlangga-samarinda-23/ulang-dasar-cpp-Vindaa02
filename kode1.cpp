#include <iostream>
using namespace std;

void cetakData(string nama, string nisn, string jurusan, int tinggiBadan){
    cout << "nama anda: " << nama << endl;
    cout << "nisn anda: " << nisn << endl;
    cout << "jurusan anda: " << jurusan << endl;
    cout << "tinggi badan: " << tinggiBadan << endl;
}

int main() {
    string nama = "Novinda Jayadiningrum";
    string nisn = "0072811075";
    string jurusan = "PPLG";
    int tinggiBadan = 162;

    cetakData(nama, nisn, jurusan, tinggiBadan);
    return 0;
} 