#include <iostream>
using namespace std;
class bankdeposit
{
    int principle;
    int years;
    float interestRate;
    float returnvlaue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);
    bankdeposit(int p, int y, int r);
    void show();
};
bankdeposit ::bankdeposit(int p, int y, float r)
{
    principle = p;
    years = y;
    interestRate = r;
    returnvlaue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvlaue = returnvlaue * (1 + interestRate);
    }
}
bankdeposit ::bankdeposit(int p, int y, int r)
{
    principle = p;
    years = y;
    interestRate = float(r) / 100;
    returnvlaue = principle;
    for (int i = 0; i < y; i++)
    {
        returnvlaue = returnvlaue * (1 + interestRate);
    }
}
void bankdeposit ::show()
{
    cout << endl
         << "principle amount was " << principle
         << " return value after " << years << endl
         << " is " << returnvlaue << endl;
}
int main()
{
    bankdeposit a1, a2, a3;
    int p, y;
    float r;
    int R;

    // a3.show();
    cout << " Enter the value of p y and r " << endl;
    cin >> p >> y >> r;
    a1 = bankdeposit(p, y, r);
    a1.show();

    cout << " Enter the value of p y and R " << endl;
    cin >> p >> y >> R;
    a2 = bankdeposit(p, y, R);
    a2.show();

    return 0;
}