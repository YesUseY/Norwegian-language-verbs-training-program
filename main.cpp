#include <iostream>
#include <fstream>
#include <ctime>
#include <locale>
#include <string>

using namespace std;

struct kalba{
    string en;
    string no;
};

int main()
{
    setlocale(LC_ALL,"no_NO.UTF-8");
    fstream fin("data.txt");
    kalba X[200];
    string test;
    int atspeti = 0;
    srand(time(0));
    for (int i = 0; i <159; i++) {
            fin >> X[i].en >> X[i].no;
        }
    int gyvybes = 5;
    while (gyvybes > 0){
            int i = rand()%159;
            cout << X[i].en << endl << "Iveskite zodi:" << endl;
         do{
                cin >>test;
            if (test!=X[i].no) {
                gyvybes--;
                cout << "-=KLAIDA=- Bandykite dar karta! Jums liko: " <<  gyvybes << " gyvybes " << endl;
                if (gyvybes==0){
                    break;
                }
              }
            }
            while (test!=X[i].no);
            atspeti++;
        }
        cout << "zaidimas baigtas, Atspeti zodziai: " << atspeti - 1 << endl;
    return 0;
}
