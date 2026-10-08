#include<iostream>
#include<vector>

using namespace std;
template<class T>
void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"";
        cout<<v.at(i)<<"";
    }
    cout<<endl;
    
}

int main(){
    vector<int>vec1;
    // vector<float>vec2(4.5);
    // vec2.push_back(5.7);
    vector<int> vec4(8,9);
    display(vec4);
    // int  element,size;
    // cout<<"the size of vector is "<<endl;
    // cin>>size;

    // for (int i = 0; i < size; i++)
    // {
        
        
    //     cout<<"enter the element of vector to add"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 455);

    // display(vec1);
    return 0;
}