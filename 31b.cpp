#include<iostream>
#include<cmath>
using namespace std;
class point{
    int x , y;
    public:
    point(int a , int b){
        x = a;
        y = b;
    }
    void displaypoint(){
        cout<<"the point is "<<x<<" , "<<y<<endl;
    }
    double distance(point p ){
    return sqrt(pow(p.x - x, 2) + pow(p.y - y, 2) );
    }

}; 


int main(){
   point t1(2,6);
   point t2(5,9);
   t1.displaypoint();
   t2.displaypoint();
   cout<<"distance" << t1.distance(t2);

    return 0;
}  