#include <iostream>
#include <cmath>   // Karekok islemi icin

using namespace std;

int main() {
    double a, b, c, delta, x1, x2;

    // Kullanicidan degerleri al 
    cout << "a degerini giriniz: ";
    cin >> a;

    cout << "b degerini giriniz: ";
    cin >> b;

    cout << "c degerini giriniz: ";
    cin >> c;

    // Delta hesaplama
    delta = (b * b) - (4 * a * c);

    cout << "\nDelta degeri: " << delta << endl;
    cout << "----------------------------------------" << endl;

    if (delta < 0) {
        cout << "Delta < 0 oldugu icin reel (gercel) kok yoktur." << endl;
    }
    else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "Delta = 0 oldugu icin cakisik (tek) kok vardir." << endl;
        cout << "Kok (x): " << x1 << endl;
    }
    else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "Delta > 0 oldugu icin iki farkli kok vardir." << endl;
        cout << "1. Kok (x1): " << x1 << endl;
        cout << "2. Kok (x2): " << x2 << endl;
    }

    cout << "\n"; 
    
    
    system("pause"); 
    
    return 0;
}
