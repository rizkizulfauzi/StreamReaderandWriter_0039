#include <iostream>
using namespace std;

int main(){
    try{
        cout << "Selamat Belajar di Prodi TI UMY" <<endl;
        throw 0.5;
        cout << "Pernyataan tidak akan dieksekusi" <<endl;
    }
    catch(int a){
        cout <<"Pengecualian akan dieksekusi" <<endl;
    }
    catch (...) {
        cout << "default pengecualian diesekusi" << endl;
    }

    return 0;
}