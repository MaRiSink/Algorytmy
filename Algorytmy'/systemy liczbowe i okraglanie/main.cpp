#include <iostream>
#include <fstream>
#include <math.h>
#include <cmath>

using namespace std;

void zPlikiem()
{
        ifstream file ("liczby_bin.txt") ;

    if(!file.is_open())
    {
    cout << "NIe";
    }
    else
    {
        int two[1000] = {};
        int ten[1000] = {};

        for (int i = 0; i < 1000; i++)
        {
            file >> two[i];

         while(two[i] > 0)
         {
             int wynik = 0;

             if(two[i] == 1 && wynik == 0)
             {
                 ten[i] = two[i];
                 break;
             }
             if(two[i] == 1 && wynik != 0)
             {
                 ten[i] = ten[i]+two[i];
                 cout << ten[i] << endl;
                 break;
             } else
             {
                 if(two[i]%10 == 1)
                 {
                     ten[i] = pow(2,wynik) + ten[i];
                     cout << ten[i] << endl;
                     wynik++;
                 }
                 else
                 {
                     wynik++;
                 }

                  two[i] = two[i]/10;
             }


         }
        }
    }
}

void zDecNaBin()
{
     int liczbadec;
    int i = 0;
    int liczbabin[32] = {};

    cin >> liczbadec;

    while (liczbadec > 0)
    {
        if(liczbadec%2 == 0)
        {
            liczbabin[i] = 0;
        } else {liczbabin[i] = 1;}
        liczbadec=liczbadec/2;
        i++;
    }

    while(i>=0)
    {
        cout << liczbabin[i];
        i--;
    }


}

/*void (wszystkiesystemy)
{
     int liczbadec;
    int system;
    int i = 0;
    int liczbasystemu[32] = {};

    cout << "Podaj decymalny system: ";
    cin >> liczbadec;
    cout << endl;

    cout << "Podaj system: ";
    cin >> system;
    cout << endl;

    while (liczbadec > 0)
    {
        liczbasystemu[i] =
       liczbadec%system;

        'A' = 10;
        'B' = 11;
        'C' = 12;
        'D' = 13;
        'E' = 14;
        'F' = 15;
        liczbadec=liczbadec/system;
        i++;
    }

    while(i>=0)
    {
        cout << liczbabin[i];
        i--;
    }

}*/

void dol()
{
  float a;
  cin >> a;
  cout << endl;

 if(a > 0)
 {
  int dol;
  dol=a+1;
  cout << dol;
 }
 else
 {
  int dol;
  dol=a-1;
  cout << dol;
 }
}

void gora()
{
    float a;
  cin >> a;
  cout << endl;

  if(a > 0)
  {
  int gora=a+1;
  cout << gora;
  }
  else
  {
  int gora=a-1;
  cout << gora;
  }

}

void zaokr()
{
    float a;
  cin >> a;
  cout << endl;

  if(a > 0)
  {
  int dol = a;
  float odp = a-dol;
  cout << odp << endl;
  if(odp < 0.5)
  {
      cout << dol;
  }
  else
  {
      cout << dol+1;
  }
  }
  else
  {
    int dol = a;
  float odp = a+dol;
  cout << odp << endl;
  if(odp < 0.5)
  {
      cout << dol;
  }
  else
  {
      cout << dol-1;
  }
  }
}

void zad4()
{
   int a;
  cin >> a;
  cout << endl;
  float a2 = a*0.1;
  cout << a2 << endl;
  int dol = a2;

  if(a>0){
  float odp = a2-dol;

  odp = odp*10;

  if(odp>5)
  {
  int dolol= a-odp;
  cout << dolol;
  } else
  {
  int dolol= a+10-odp;
  cout << dolol;
  }
  }
}

int main()
{
  float a;
  cin >> a;
  cout << endl;
  float a2 = a*0.1;
  cout << a2 << endl;
  int dol = a2;

  if(a>0){
  float odp = a2-dol;

  odp = odp*100;

  if(odp>5.0)
  {
  float dolol= a-odp;
  cout << dolol;
  } else
  {
  int dolol= a+10-odp;
  cout << dolol;
  }
  }

}
