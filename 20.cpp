#include<iostream>
using namespace std;

int sum(float a, int b){
     cout<<"it is using this function "<<endl;
    return a+b;
}
int sum(int a, int b,int c){
    cout<<"it is using this function 2 "<<endl;
    return a+b+c;
}
int volume(double r , int h){
    return(3./14 * r * r * h);
}

int volume(int a){
    return (a* a * a);
}
int main(){
    cout<<" the sum of 6 , 7 is "<<sum(6.4,7)<<endl;
    cout<<" the sum of 6 , 7,8 is "<<sum(6,7,8)<<endl;
    cout<<" the volume of couboid  of 6,7 "<<volume(6,7)<<endl;
    cout<<" the volume of  cylinder  of 3,4,,6 "<<volume(3)<<endl;
    return 0;
} 