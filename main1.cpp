#include <iostream>
#include <unistd.h>
using namespace std;

int main(int argc, char **argv)
{
    int opt;
    while ((opt = getopt(argc, argv, "oah")) != -1) {
        switch(opt) {
        case 'o':
            int ch1, ch, kol, sum;
            cout << "Numbers is (3-5): " << endl;
            cin >> kol;
            if (kol >= 3 and kol <= 5) {
                sum = 1;
                for (int i = 0; i <= kol-1; i++) {
                    cin >> ch;
                    sum *= ch;
                }
                cout << "Answer: " << sum << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'a':
            cout << "Numbers is (3-5): " << endl;
            cin >> kol;
            if (kol >= 3 and kol <= 5) {
                cout << "Divider: " << endl;
                cin >> ch1;
                for (int i = 0; i <= kol-2; i++) {
                    cin >> ch;
                    ch1 /= ch ;
                }
                cout << "Answer: " << ch1 << endl;
                break;
            } else {
                cout << "No" << endl;
            }
            break;
        case 'h':
            cout << "-o - умножение" << endl;
            cout << "-а - деление" << endl;
            cout << "-h - справка" << endl;
            break;
        default:
            cout << "-o - умножение" << endl;
            cout << "-а - деление" << endl;
            cout << "-h - справка" << endl;
        }
    }
}
