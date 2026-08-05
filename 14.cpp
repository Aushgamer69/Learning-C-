#include<iostream>
using namespace std;

// typedef struct student
// {
//     int id ;
//     char fav;
//     float marks;
// }st;

union money
{
    int rice ;
    bool loan ;
    float moneys;
};


int main(){
    enum carcollection{lamborghini, bugatti, ferrari, Mahindraxuv700, scorpio, creta,};
   cout<<lamborghini<<endl;
    cout<<bugatti<<endl;
    cout<<ferrari<<endl;
    cout<<Mahindraxuv700<<endl;
    cout<<scorpio<<endl;
    cout<<creta<<endl;


    // union money c1;
    // c1.rice= 40;
    // c1.moneys = 23.4;
    // cout<<"in wtich way will you pay for the prodect "<<c1.moneys;


    // st ayush;
    // st raj;
    // ayush.id = 12;
    // ayush.fav = 'c';
    // ayush.marks = 89.6;
    // raj.id = 45;
    // raj.fav = 'u';
    // raj.marks = 70.4;
    // cout<<"the student id "<<ayush.id<<endl;
    // cout<<"the student fav "<<ayush.fav<<endl;
    // cout<<"the student marks is " <<ayush.marks<<endl<<endl;;
    // cout<<"the student id "<<raj.id<<endl;
    // cout<<"the student fav "<<raj.fav<<endl;
    // cout<<"the student marks is " <<raj.marks<<endl;
   
    
    return 0;
}