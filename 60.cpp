#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream out;
    out.open("60code");
    out << "this is me\n";
    out << "this is me also\n";
    out << "this is im\n";
    out.close();

    ifstream in;
    string st;
    in.open("60code");
    in >> st;
    cout << st;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();

    return 0;
}