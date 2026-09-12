#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student::set_roll_number(int r)
{
    roll_number = r;
}
void student::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;
    float chemstriy;

public:
    void set_marks(float, float, float);
    void get_marks();
};

void exam::set_marks(float m1, float m2, float m3)
{
    maths = m1;
    physics = m2;
    chemstriy = m3;
}

void exam::get_marks()
{
    cout << "the marks obtainned in maths are " << maths << endl;
    cout << "the marks obtainned in physics are " << physics << endl;
    cout << "the marks obtainned in chemstriy are " << chemstriy << endl;
}

class reslut : public exam
{
    float precentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "your precentage is " << ((maths + physics + chemstriy) / 300) * 100
             << " % " << endl;
    }
};

int main()
{
    reslut Ayush;
    Ayush.set_roll_number(4);
    Ayush.set_marks(75.6, 67.5, 51.4);
    Ayush.display();

    return 0;
}