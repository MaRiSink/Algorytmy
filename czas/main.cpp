#include <iostream>

using namespace std;

void zad1a()
{
    int a;
    cin >> a;
    cout << endl;
    int b = a % 60;

    cout << a/60 << ":" << b << endl;
}

void zad1b()
{
     int s;
    cin >> s;
    cout << endl;
    int godziny = s/3600;
    s=s%3600;
    int minuty = s/60;
    s=s%60;
    cout << godziny << ":" << minuty  << ":" << s << endl;
}


int main()
{
    string zmienna = "";
    cin >> zmienna;

    int dziesietna_godzuny = zmienna[0] - '0';
    int godziny = zmienna[1] - '0';

    int dziesietne_minuty = zmienna[3] - '0';
    int minuty = zmienna[4]-'0';

    int dziesietne_sekundy = zmienna[6]-'0';
    int sekundy = zmienna[7]-'0';

    int s{0};
    s += dziesietne_sekundy*10+sekundy;
    s += (minuty + dziesietne_minuty*10)*60;
    s += (godziny + dziesietna_godzuny*10)*3600;


    cout << s;





}
