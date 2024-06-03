#include <iostream>
#include <exception>
//untuk obyek exception yang akan digunakan
#include <array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main() {
    cout << "Awal Program" << endl; 
    try {
        array <int, 3> data= {8,4,2};
        //pesan array integer 3 elemen
        cout << data.at(5)<<endl;
    }
    catch (exception& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
    }
    cout << "Baris Program yang terakhir" << endl;
    return 0;
}