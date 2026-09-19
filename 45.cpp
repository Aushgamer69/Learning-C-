#include<iostream>
using namespace std;
class student
{
    protected:
    int roll_no;
    public:
    void set_number(int a){
     roll_no = a ;
    }
    void print_number(){
        cout<<" your roll no is " << roll_no<<endl;
    }

};

class Test : virtual public student
{
    protected:
   float english , hindi, sst ;
   public:
   void set_marks(float m1 , float m2 , float m3){
    english = m1;
    hindi  = m2 ; 
    sst = m3;

   }
   void print_marks(void){
    cout<<" your result is here "<<endl
    <<" english "<<english<<endl
    <<" hindi "<<hindi<<endl
    <<" sst "<<sst<<endl;

   }
   

};

class sports : virtual student
{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc ;
    }
    void print_score(void){
        cout<< " your PT score is "<<score<<endl;
    }

};

class result : public Test , public sports
{
    private:
    float total;
    public:
    void display(void){
        total = english  +   hindi + sst  + score;
        print_number();
        print_marks();
        print_score();
        cout<< "your total score is: " <<total<<endl;


    }

};
int main(){
   result Ayush ;
   Ayush.set_number(4);
   Ayush.set_marks(89.3,45,56);
   Ayush.set_score(90);
   Ayush.display();
    return 0;
}