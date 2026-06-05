#include <iostream>
#include "Q1-Library_Management_System.cpp"

int main()
{
    Media *items[100];
    int count = 0;
    int choice;

    do
    {
        cout << "\n===== DIGITAL MEDIA SYSTEM =====";
        cout << "\n1. Add Song";
        cout << "\n2. Add Podcast";
        cout << "\n3. Add Video";
        cout << "\n4. Show All Media";
        cout << "\n5. Play Media";
        cout << "\n6. Stop Media";
        cout << "\n7. Exit";
        cout << "\nEnter Choice : ";
        cin >> choice;

        try
        {
            if (choice == 1)
            {
                string title, creator;
                int duration;

                cout << "Enter Song Title : ";
                cin >> title;

                cout << "Enter Creator Name : ";
                cin >> creator;

                cout << "Enter Duration : ";
                cin >> duration;

                items[count++] = new Song(title, creator, duration);

                cout << "\nSong Added Successfully.";
            }

            else if (choice == 2)
            {
                string title, creator;
                int episode;

                cout << "Enter Podcast Title : ";
                cin >> title;

                cout << "Enter Creator Name : ";
                cin >> creator;

                cout << "Enter Episode Number : ";
                cin >> episode;

                items[count++] = new Podcast(title, creator, episode);

                cout << "\nPodcast Added Successfully.";
            }

            else if (choice == 3)
            {
                string title, creator, quality;

                cout << "Enter Video Title : ";
                cin >> title;

                cout << "Enter Creator Name : ";
                cin >> creator;

                cout << "Enter Quality : ";
                cin >> quality;

                items[count++] = new Video(title, creator, quality);

                cout << "\nVideo Added Successfully.";
            }

            else if (choice == 4)
            {
                if (count == 0)
                {
                    cout << "\nNo Media Available.";
                }
                else
                {
                    for (int i = 0; i < count; i++)
                    {
                        cout << "\nMedia No : " << i + 1 << endl;
                        items[i]->display();
                    }
                }
            }

            else if (choice == 5)
            {
                int num;

                cout << "Enter Media Number : ";
                cin >> num;

                if (num >= 1 && num <= count)
                {
                    items[num - 1]->play();
                }
                else
                {
                    cout << "\nInvalid Number.";
                }
            }

            else if (choice == 6)
            {
                int num;

                cout << "Enter Media Number : ";
                cin >> num;

                if (num >= 1 && num <= count)
                {
                    items[num - 1]->stop();
                }
                else
                {
                    cout << "\nInvalid Number.";
                }
            }
        }
        catch (exception &e)
        {
            cout << "\nError : " << e.what();
        }

    } while (choice != 7);

    for (int i = 0; i < count; i++)
    {
        delete items[i];
    }

    cout << "\nThank You!";
    return 0;
}