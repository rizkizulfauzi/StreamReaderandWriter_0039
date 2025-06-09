#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    ofstream outfile;

    outfile.open("contohFile.txt");

    cout << ">= Menulis file,\'q\' untuk keluar" << endl;

    while (true)
    {
        cout << "-";

        getline(cin, baris);

        if (baris == "q")
            break;

        outfile << baris << endl;
    }
    outfile.close();

    ifstream infile;

    infile.open("contohFile.txt");

    cout << endl
         << ">= Membuka dan membaca file" << endl;

    if (infile.is_open())
    {
        while (getline(infile, baris))
        {
            cout << baris << '\n';
        }
    }
}