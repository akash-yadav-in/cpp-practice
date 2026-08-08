#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() // If virtual removed then tut[0] and tut[1] pointer will call cwh disply 2 times and not the siplay of cwhvideo and cwhtext
    {
        cout << "CWH version is called" << endl;
    }
};

class CWHVideo : public CWH
{

    float videolength;

public:
    // Constructor in derived class below
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videolength = vl;
    }

    void display()
    {
        cout << "This is an amzing video with title = " << title << endl;
        cout << "This video has ratings: " << rating << " Out of 5 stars" << endl;
        cout << "The length of this video is : " << videolength << " minutes" << endl;
    }
};
class CWHText : public CWH
{

    int word;

public:
    // Constructor in derived class below
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        word = wc;
    }
    void display()
    {
        cout << "This is an amzing tutorial with title: " << title << endl;
        cout << "it has ratings: " << rating << " Out of 5 stars" << endl;
        cout << "Number of words are: " << word << endl;
    }
};

int main()
{
    //  for any video
    string title;
    float ratings, vlen;

    title = "This is my first video";
    vlen = 4.4;
    ratings = 3.4;

    CWHVideo mvideo(title, ratings, vlen);
    // video.display();

    // for text
    string titles;
    float rating;
    int word;

    title = "This is my first video";
    rating = 4.55;
    word = 1000;

    CWHText ctext(titles, rating, word);
    // text.display();

    CWH *tut[2]; // Here we have made pointer and pointed it to mvideo and ctext objects
    tut[0] = &mvideo;
    tut[1] = &ctext;

    tut[0]->display(); 
    tut[1]->display();

    return 0;
}


/*

Rules for Virtual function

1. They cannot be static

2. They are accessed by object pointer

3. Virtual function can be a friend of another class

4. Avirtual functon in base class might not be used i.e the display function if virtual is used

5. if A virtual defined in the base class ,  there is  no neccessity of redifinnig in derived class















*/
