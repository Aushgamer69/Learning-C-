#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"tell me your age so what i can inviet you"<<endl;
    cin>>age;
    
    if (age<18)
    {
    cout<<"you are not come to the party"<<endl;
    }
    else if (age==18){
        cout<<"yes are eligileb to the party but you are cuting very cloery"<<endl;
    }
    else{
    cout<<"you inveded to the party"<<endl;
    }
    return 0;
}
