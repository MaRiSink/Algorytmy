#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void zad1a()
{
    int i = 0;
    for(;;)
    {
        int a;
        cin >> a;
        if (a < 0)
        {
            break;
        }
        i++;
    }
    cout << " ";
    cout << i;
}

void zad1b()
{
    int i = 0;
    for(;;)
    {
        int a;
        cin >> a;
        if (a < 0)
        {
            break;
        }
        i = a+i;
    }
    cout << " ";
    cout << i;
}

void zad1c()
{
    float i = 0;
    float j = 0;
    for(;;)
    {
        int a;
        cin >> a;
        if (a < 0)
        {
            break;
        }
        i = a+i;
        j++;
    }
    cout << " ";
    cout << i/j;
}


void zad2()
{
    ifstream file ("litery.txt");
    char tab[1000] = {};
    int j = 0;

    for(int i = 0; i < 1000; i++)
    {
        file >> tab[i];
        if( tab[i] == 'a')
        {
            j++;
        }
    }
    cout << j;

}

void zad3()
{
    ifstream file ("liczby.txt");

    int p = 0;
    int np = 0;
    int tab[100] = {};

    for(int i= 0; i < 100; i++)
    {
        file >> tab[i];

        if(tab[i]%2== 0)
        {
            p++;
        }
        else
        {
            np++;
        }
    }
    cout <<  "p = " << p << endl;
    cout <<  "np = " << np;

}

void zad4()
{
    ifstream file ("liczby.txt");

    int s = 0;

    for(int j = 0; j < 100; j++)
    {
        int n;

        file >> n;

        while(n > 0)
        {
            if(n % 10 == 7)
            {
                s++;
            }
            n = n/10;

        }
    }
    cout << s;
}

void zad5()
{
    ifstream file ("liczby.txt");
    int maksimum = 0;
    int l = 0;
    int ilosc = 0;

    for(int i = 0; i < 100; i++)
    {
        file >> l;

        if(l > maksimum)
        {
            maksimum = l;
        }
    }
    cout << maksimum << endl;

    file.close();

    ifstream file2("liczby.txt");

    for(int i = 0; i < 100; i++)
    {
        file2 >> l;
        if( l == maksimum )
        {
            ilosc++;
        }
    }
    cout << ilosc;

}

void zad6()
{
    ifstream file ("wyrazy.txt");

    string w;
    int l = 0;

    while(getline(file,w))
    {
        l = 0;
        for(int i = 0; i < w.size()-1; i++)
        {
            if(w[i] == ' ')
            {
                l++;
            }
        }
        cout << l +1 << endl;

    }

}

void zad7()
{
    ifstream file ("wyrazy.txt");

    string w;
    int l = 0;
    int dla7 = 0;

    while(getline(file,w))
    {
        l = 0;
        for(int i = 0; i < w.size()-1; i++)
        {
            if(w[i] == ' ')
            {
                l++;
            }
        }
        if(l == 0)
        {
           dla7++;
        }

    }
    cout << dla7;


}

void zad8()
{
    ifstream file ("kolumny.txt");

    string w[400] = {};

   while(file >> w)
   {
       for(int i = 0, j=w.size(); i<j ; i++,j--)
       {
           if()
       }
   }
}


int main()
{
    zad8();
}
