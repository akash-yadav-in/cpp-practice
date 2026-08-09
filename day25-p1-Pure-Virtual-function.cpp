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
    virtual void display() = 0; // Means we have made a Pure Virtual finction And use to make abstact base class that we have made new classes with this base class but work is don on the derived one 
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

    void display(){
        cout<<"End of code "<<endl;

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


