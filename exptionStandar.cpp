#include <iostream>
#include <exception>
#include <array>
using namespace std;


int main(){
    cout << "Awal Program" << endl; //penanda 1
    try {
        array<int,3> data ={1,2,3};
        cout<<data.at(5)<<endl;
    }
    catch (exception& e){
        cout << e.what() <<endl;
    }
    cout <<"Baris program yang terakhir" << endl;
    return 0;
}