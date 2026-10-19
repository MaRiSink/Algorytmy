#include <iostream>
#include <fstream>


using namespace std;

void zad1()
{
    ifstream file ("liczby.txt");

    if(file.is_open())
    {
       int tab[1000] ={};

       for(int i = 0; i < 1000; i++)
       {
           file >> tab[i];

           if(tab[i] == 100)
           {
               cout << i;
               break;
           }
       }
    }
    else
    {
        cout << "error";
    }
}


void zad2()
{
        ifstream file ("liczby.txt");

    if(file.is_open())
    {

     int tab[1000] ={};
       for(int i = 1; i <= 1000; i++)
       {
           file >> tab[i];

           if(tab[i] == 67)
           {
               cout << i << " ";
           }
       }
    }

    else
    {
        cout << "error";
    }
}


void zad3()
{
     ifstream file ("liczby.txt");

    if(file.is_open())
    {
        int a;
        cin >> a;
        cout << endl;

     int tab[1000] ={};
       for(int i = 1; i <= 1000; i++)
       {
           file >> tab[i];

           if(tab[i] == a)
           {
               cout << i << " ";
           }
       }
    }

    else
    {
        cout << "error";
    }
}

void zad4()
{
    ifstream file ("wiersze.txt");

    if(file.is_open())
    {
        int i = 100;

        while(i > 0)
        {

            int x;
            int n;
            int g = 0;

            file >> x;
            file >> n;

          int zmienna;

            for(int j = 1; j <= n; j++)
            {
                file >> zmienna;

                if( zmienna == x)
                {
                    cout << j << ' ';
                    g++;
                }

               if(g == 0 && j == n)
               {
                   cout << "break";
               }
               zmienna = 0;

            }
            i--;
            cout << endl;
        }
    }
     else
    {
        cout << "error";
    }

}



int main()
{
   zad4();
}
