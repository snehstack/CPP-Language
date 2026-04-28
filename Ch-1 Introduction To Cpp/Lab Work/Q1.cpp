#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter array size:";
    cin >> size;
    int array[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements :";
        cin >> array[i];
    }

    for(int i=0; i<size; i++)
    {
        if(array[i]%2==0)
    
        {
            cout<<array[i]<<"\t";
        }
    }

    return 0;
}