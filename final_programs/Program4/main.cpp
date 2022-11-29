
#include <iostream>
using namespace std;

class Media
{
protected:
    string title;
    string publication;

public:
    Media(){};
    Media(string _title, string _publication)
    {
        title = _title;
        publication = _publication;
    }
    virtual void read()
    {
        cout << "Reading Media" << endl;
    }
    virtual void show()
    {
        cout << "Watching Media" << endl;
    }
    virtual ~Media()
    {
        cout << "Media Deleted" << endl;
    }
};

class Book : public Media
{
protected:
    int pages;

public:
    Book(string _title, string _publication, int _pages) : Media(_title, _publication)
    {
        pages = _pages;
    }
    void read()
    {
        cout << "Reading " << title << " published by " << publication << endl;
    }
    ~Book()
    {
        cout << "Book deleted" << endl;
    }
};
class Tape : public Media
{
protected:
    int playing_time;

public:
    Tape(string _title, string _publication, int _playing_time) : Media(_title, _publication)
    {
        playing_time = _playing_time;
    }
    void show()
    {
        cout << "Watching " << title << " published by " << publication << endl;
    }
    ~Tape()
    {
        cout << "Tape Deleted" << endl;
    }
};

int main()
{
    Media *media;
    string title, publication;
    int pages, time;
    cout << "Enter title: ";
    getline(cin, title);
    // getchar();
    cout << "Enter publication: ";
    getline(cin, publication);
    cout << "Enter no. of pages: ";
    cin >> pages;
    media = new Book(title, publication, pages);
    media->read();
    getchar();
    cout << "Enter title: ";
    getline(cin, title);
    cout << "Enter publication: ";
    getline(cin, publication);
    cout << "Enter watch time in minuted: ";
    cin >> time;
    media = new Tape(title, publication, time);
    media->show();
    return 0;
}