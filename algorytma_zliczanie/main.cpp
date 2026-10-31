#include <iostream>
#include <fstream>


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
   ifstream file("kolumny.txt");

   if(file.is_open())
   {
     string wyraz;
     int ile = 0;

     while(file >> wyraz)
     {
         if(wyraz.size()==5)
         {
             ile++;
         }
     }
     cout << ile;
     file.close();
   }
   else
   {
       cout << "error";
   }
}

void zad4()
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

void zad5()
{
ifstream file ("kolumny.txt");

if(file.is_open())
{
    char znak;
    int ile = 0;
    while (file >> znak)
    {
        if(znak == 'z')
        {
            ile++;
        }
    }
    cout << ile;
    file.close();
}
else
{
    cout << "error";
}
}

void zad6()
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

void zad7()
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

void zad8()
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

void zad9()
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

void zad10a()
{
    ifstream file("kolumny.txt");

    if(file.is_open())
    {
        string w1,w2;
        int ile = 0;

        while(file >> w1 >> w2)
        {

            if(w1.size()>w2.size())
            {
                for(int i = 0; i < w2.size(); i++)
                {
                    if(w1[i] == w2[i])
                    {
                        ile++;
                        break;
                    }

                }

            }
            else
            {
                 for(int i = 0; i < w1.size(); i++)
                {
                    if(w1[i] == w2[i])
                    {
                        ile++;
                        break;
                    }
                }
            }
        }
        cout << ile;

        file.close();
    }
    else
    {
        cout << "error";
    }

}

void zad10b() //u mnie nic sie nie zmienia z 10a
{
    ifstream file("kolumny.txt");

    if(file.is_open())
    {
        string w1,w2;
        int ile = 0;

        while(file >> w1 >> w2)
        {

            if(w1.size()>w2.size())
            {
                for(int i = 0; i < w2.size(); i++)
                {
                        if(w1[i]>= 'A' && w1[i]<= 'Z')
                    {
                        w1[i] = w1[i]+32;
                    }
                     if(w2[i]>= 'A' && w2[i]<= 'Z')
                    {
                        w2[i] = w2[i]+32;
                    }
                    if(w1[i] == w2[i])
                    {
                        ile++;
                        break;
                    }

                }

            }
            else
            {
                 for(int i = 0; i < w1.size(); i++)
                {
                      if(w1[i]>= 'A' && w1[i]<= 'Z')
                    {
                        w1[i] = w1[i]+32;
                    }
                     if(w2[i]>= 'A' && w2[i]<= 'Z')
                    {
                        w2[i] = w2[i]+32;
                    }
                    if(w1[i] == w2[i])
                    {
                        ile++;
                        break;
                    }
                }
            }
        }
        cout << ile;

        file.close();
    }
    else
    {
        cout << "error";
    }

}


void zad11()
{
    ifstream file ("kolumny.txt");

    string w;
    bool p = true;
    int ile = 0;

   while(file >> w)
   {
       for(int i = 0, j=w.size(); i<j ; i++,j--)
       {
            if (w[i] != w[j])
            {
                p = false;
                break;
            }

       }
       if (p)
            {
                ile++;
            }
   }
   cout << ile;
}

void zad12()
{

}


void zad13()
{
    ifstream file ("cyfry.txt");

    if(file.is_open())
    {
        int tab[10] = {};
        char litera;

        while(file.get(litera))
        {
            tab[litera - '0']++;
        }

        for(int i = 0; i < 10; i++)
        {
            cout << i+1 << "=" << tab[i] << endl;
        }


        file.close();
    }
    else
    {
        cout << "error";
    }
}

void zad14()
{
    ifstream file ("litery.txt");

    if(file.is_open())
    {
        int tab[26] = {};
        char litera;

        while(file.get(litera))
        {
            tab[litera - 'a']++;
        }

        for(int i = 0; i < 26; i++)
        {
            cout << char('a'+ i) << "=" << tab[i] << endl;
        }


        file.close();
    }
    else
    {
        cout << "error";
    }
}

void zad15()
{
    ifstream file ("znaki.txt");

    if(file.is_open())
    {
        int tab[128] = {};
        char znak;

        while(file.get(znak))
        {
            tab[znak - '0']++;
        }

        for(int i = 0; i < 128; i++)
        {
            cout << char('0'+ i) << "=" << tab[i] << endl;
        }


        file.close();
    }
    else
    {
        cout << "error";
    }
}

void zad16()
{
    ifstream file ("liczby.txt");

    if(file.is_open())
    {
        int tab[10] = {};
        char znak;


        while(file.get(znak))
        {
            tab[znak - '0']++;
        }

        int maks=0;
        int cyfra = 0;


        for(int i = 0; i < 10; i++)
        {

            cout <<  i << "=" << tab[i] << endl;

            if(tab[i]>maks)
            {
                maks = tab[i];
                cyfra = i;
            }
        }

        cout << "najwiecej " << cyfra << '=' << maks;


        file.close();
    }
    else
    {
        cout << "error";
    }
}

void zad17()
{
    ifstream file ("wskazniki.txt");

    if(file.is_open())
    {
        string kolory[6] = { "red", "green", "blue", "cyan", "magenta", "yellow"};
        int tab[6]= {};

        string kolor;
        int indeks;


        while(file >> kolor >> indeks)
        {
            for (int i = 0; i < 6; i++)
            {
                if (kolor == kolory[i])
                {
                    tab[i]++;
                    break;
                }
            }
        }



        for(int i = 0; i < 6; i++)
        {
            if (tab[i] > 0)
            {
                cout << kolory[i] << " " << tab[i] << endl;
            }
        }

        file.close();
    }
    else
    {
        cout << "error";
    }
}


void zad18a() //nie dzia³a, 18b te¿ nie dzia³a
{
    ifstream file ("kolumny.txt");

    if(file.is_open())
    {
        string wyraz1, wyraz2;
        int anagram = 0;
        int zmienna = 26;
        int litery[26]= {};

        while(file>>wyraz1>>wyraz2)
        {
            if(wyraz1.size()!= wyraz2.size())
            {
                break;
            }
            else
            {
                for(int i = 0; i < wyraz1.size(); i++)
                {
                    litery[wyraz1[i] - 'a']++;
                }
                for(int i = 0; i < wyraz2.size(); i++)
                {
                    litery[wyraz2[i] - 'a']++;
                }

                for (int i = 0; i < 26; i++)
                {
                    if (litery[i] == 0)
                    {
                        zmienna--;
                    }
                    else
                    {
                        break;
                    }

                }
                if(zmienna == 0)
                {
                    anagram++;
                    cout << anagram;
                }

            }
        }
        // cout << anagram;
        file.close();
    }
    else
    {
        cout << "error";
    }
}

void zad18b()
{
    ifstream file ("kolumny.txt");

    if(file.is_open())
    {
        string wyraz1, wyraz2;
        int anagram = 0;
        int zmienna = 26;
        int litery[26]= {};

        while(file>>wyraz1>>wyraz2)
        {
            if(wyraz1.size()!= wyraz2.size())
            {
                break;
            }
            else
            {
                for(int i = 0; i < wyraz1.size(); i++)
                {
                    if (wyraz1[i] >= 'A' && wyraz1[i] <= 'Z' )
                    {
                        wyraz1[i] = wyraz1[i]+32;
                    }
                    litery[wyraz1[i] - 'a']++;
                }
                for(int i = 0; i < wyraz2.size(); i++)
                {
                    if (wyraz2[i] >= 'A' && wyraz2[i] <= 'Z' )
                    {
                        wyraz2[i] = wyraz2[i]+32;
                    }
                    litery[wyraz2[i] - 'a']++;
                }

                for (int i = 0; i < 26; i++)
                {
                    if (litery[i] == 0)
                    {
                        zmienna--;
                    }
                    else
                    {
                        break;
                    }

                }
                if(zmienna == 0)
                {
                    anagram++;

                }

            }
        }
        cout << anagram;
        file.close();
    }
    else
    {
        cout << "error";
    }
}

void zad19()
{
    ifstream file("wyrazy.txt");

    if(file.is_open())
    {
        string wyraz;
        string wyrazy[279]= {};
        int ile[279]= {};

        int n=0; //pomóc(ile istnieje rozn wyrazow)

        while(file>>wyraz)
        {
            int i;
            for(i = 0; i < n; i++)
            {
                if (wyrazy[i] == wyraz)
                {
                    ile[i]++;
                    break;
                }
            }
            if(i == n)
            {
                wyrazy[n]=wyraz;
                ile[n]=1;
                n++;
            }

        }
        for (int i = 0; i < n; i++)
        {
            cout << wyrazy[i] << "=" << ile[i] << endl;
        }
        file.close();
    }
    else
    {
        cout << "eerr";
    }
}

int main()
{
    zad11();
}
