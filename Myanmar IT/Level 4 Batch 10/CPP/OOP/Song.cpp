#include<iostream>
#include<string>
using namespace std;

class Song
{
    private :
        string title, album, singer;
    
    public:
        Song ()
        {
            title = "unknow";
            album = "unknow";
            singer = "unknow";
        }

        void setTitle (string ti)
        {
            this-> title = ti;
        }

        string getTitle ()
        {
            return title;
        }

        void setAlbum (string al)
        {
            this -> album = al ;
        }

        string getAlbum ()
        {
            return album;
        }

        void setSinger (string si)
        {
            this ->  singer = si;
        }

        string getSinger ()
        {
            return singer;
        }

        void showData ()
        {
            cout << endl << getTitle() << "\t" << getAlbum() << "\t" << getSinger() << endl << endl;
        }
};

int main ()
{
    Song s[3];
    string uTitle, uAlbum, uSinger;

    for (int i = 0; i < 3; i++)
    {
        cout << "\n--------------Data---------------" << (i+1) << endl ;

        cout << "Enter Title : ";
        getline(cin,uTitle);

        cout << "Enter Album : ";
        getline(cin,uAlbum);

        cout << "Enter Singer : ";
        getline(cin,uSinger);

        s[i].setTitle(uTitle);
        s[i].setAlbum(uAlbum);
        s[i].setSinger(uSinger);
    }

    cout << "\n\n------------------------------------------------------\n";
    cout << "Song Title \tSong Alubm \tSong Singer" << endl;
    cout << "-------------------------------------------------------\n";
    for (int i = 0; i < 3; i++)
    {
        s[i].showData();
    }
    
    
    return 0;
}