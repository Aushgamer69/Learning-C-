#include <iostream>
#include <string>
using namespace std;
class cwh
{
protected:
    string title;
    float reting;

public:
    cwh(string s, float r)
    {
        title = s;
        reting = r; 
    }
    virtual void display() {}
};

class cwhvideo : public cwh
{
    int videolenth;

public:
    cwhvideo(string s, float r, float vl) : cwh(s, r)
    {
        videolenth = vl;
    }
    void display()
    {
        cout << " this queit unique video and the name something boled " << title << endl;
        cout << " the reting of this video " << reting << endl;
        cout << " this video is not to long " << videolenth << " min " << endl;
    }
};

class cwhtext : public cwh
{
    int word;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        word = wc;
    }
    void display()
    {
        cout << " this queit unique text to tutorial and the name something boled " << title << endl;
        cout << " the reting of this text to tutorial " << reting << endl;
        cout << " it summnery text to tutorial  is not to long " << word << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;

    title = "c++ tutorial ";
    vlen = 7.45;
    rating = 4.5;
    cwhvideo cppvideo(title, rating, vlen);
    // cppvideo.display();

    title = "c++ book tutorial ";
    words = 345;
    rating = 4.6;
    cwhtext cpptext(title, rating, words);
    // cpptext.display();

    cwh *tuts[2];
    tuts[0] = &cppvideo;
    tuts[1] = &cpptext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}