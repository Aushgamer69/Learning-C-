#include<iostream>
using namespace std;

int main(){
    // array example
    int marks[7]= {23,54,45,67,78,43,78};
    int mathsMarks[5];
    mathsMarks[0]= 234;
    mathsMarks[1]= 344;
    mathsMarks[2]= 654;
    mathsMarks[3]= 244;
    mathsMarks[4]= 754;

    cout<<"this is  maths marks "<<endl;

    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    cout<<mathsMarks[2]<<endl;
    cout<<mathsMarks[3]<<endl;
    cout<<mathsMarks[4]<<endl;

    cout<<"this is  marks "<<endl;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]= 90;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
    cout<<marks[6]<<endl;
    // this for loop
    // for (int  i = 0; i < 7 ; i++)
    // {
    //     /* code */
    //     cout<<"the value of marks "<< marks [i] <<endl;
    // }
    // this for while loop
    // int a = 0;
    // while (a < 7)
    // {
    //     cout<<"the value of marks is "<<marks[a]<<endl;
    //     a++;
    // this for do while loop
    int b = 0;

    do
    {
        cout<<"the value of marks is "<<marks[b]<<endl;
        b++;
    } while (b < 7 );
    // pointers and arrays
    int* c =marks;
    cout<<"the value of marks[0] is "<<*c<<endl;
    cout<<"the value of marks[1] is "<<*(c+1)<<endl;
    cout<<"the value of marks[2] is "<<*(c+2)<<endl;
    cout<<"the value of marks[3] is "<<*(c+3)<<endl;
    cout<<"the value of marks[4] is "<<*(c+4)<<endl;
    cout<<"the value of marks[5] is "<<*(c+5)<<endl;
    cout<<"the value of marks[6] is "<<*(c+6)<<endl;

       
    return 0;
}