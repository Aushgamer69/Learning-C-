#include<iostream>
#include<list>
using namespace std;

void display(list<int> & ist){
    list<int> ::iterator it;
    for (it=ist.begin(); it!=ist.end(); it++)
    {
        cout<<*it<<endl;
    }
    

}

int main(){
    list<int> list1;
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(12);
    list1.remove(9);
    // list1.pop_back();
    // list1.pop_front();

    // list<int>:: iterator iter;
    // iter = list1.begin();
    // iter++;
    // cout<<*iter;

    display(list1);
    list<int> list2(3);
    list<int>:: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    
    return 0;
}