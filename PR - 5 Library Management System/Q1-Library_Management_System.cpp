#include <iostream>
using namespace std;


class Media
{
private:
    string title;
    string creator;

public:
    Media(string t, string c)
    {
        title = t;
        creator = c;
    }

    string getTitle()
    {
        return title;
    }

    string getCreator()
    {
        return creator;
    }

    void setTitle(string t)
    {
        title = t;
    }

    void setCreator(string c)
    {
        creator = c;
    }

    virtual void play() = 0;
    virtual void stop() = 0;
    virtual void display() = 0;

    virtual ~Media() {}
};


class Song : public Media
{
private:
    int duration;

public:
    Song(string t, string c, int d) : Media(t, c)
    {
        if (d <= 0)
            throw invalid_argument("Invalid Song Duration");

        duration = d;
    }

    void play()
    {
        cout << "Playing Song...\n";
    }

    void stop()
    {
        cout << "Song Stopped.\n";
    }

    void display()
    {
        cout << "\nType : Song";
        cout << "\nTitle : " << getTitle();
        cout << "\nCreator : " << getCreator();
        cout << "\nDuration : " << duration << " sec\n";
    }
};


class Podcast : public Media
{
private:
    int episode;

public:
    Podcast(string t, string c, int e) : Media(t, c)
    {
        if (e <= 0)
            throw invalid_argument("Invalid Episode Number");

        episode = e;
    }

    void play()
    {
        cout << "Playing Podcast...\n";
    }

    void stop()
    {
        cout << "Podcast Stopped.\n";
    }

    void display()
    {
        cout << "\nType : Podcast";
        cout << "\nTitle : " << getTitle();
        cout << "\nCreator : " << getCreator();
        cout << "\nEpisode : " << episode << endl;
    }
};


class Video : public Media
{
private:
    string quality;

public:
    Video(string t, string c, string q) : Media(t, c)
    {
        quality = q;
    }

    void play()
    {
        cout << "Playing Video...\n";
    }

    void stop()
    {
        cout << "Video Stopped.\n";
    }

    void display()
    {
        cout << "\nType : Video";
        cout << "\nTitle : " << getTitle();
        cout << "\nCreator : " << getCreator();
        cout << "\nQuality : " << quality << endl;
    }
};