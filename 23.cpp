#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void cik_bin(void);
    void ones(void);
    void display(void);
};
void binary::read(void)
{
    cout << "enter the binary number : " << endl;
    cin >> s;
}
void binary::cik_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
            cout << "incorrect binary format" << endl;
        // else
        // {
        //     cout << "this is the binary formet" << endl;
        // }

        exit(0);
    }
}
void binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(void)
{
    cout << "display your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    b.ones();
    b.display();
    b.cik_bin();

    return 0;
}