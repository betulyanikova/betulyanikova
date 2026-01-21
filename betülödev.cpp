#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;
main(){
	 setlocale(LC_ALL, "Turkish");
   double a, b, c, Diskriminant, x1, x2;
   cout << "ax²+bx+c iþleminden istediðiniz bir a deðerini giriniz:";
   cin >> a;
   cout << "ax²+bx+c iþleminden istediðiniz bir b deðerini giriniz:";
   cin >> b;
   cout << "ax²+bx+c iþleminden istediðiniz bir c deðerini giriniz:";
   cin >> c;
   Diskriminant = (b * b) - (4 * a * c);
   cout << "Verdiðiniz sayýlara göre Delta deðeri:" << Diskriminant << endl;
   if (Diskriminant < 0) {
       cout << "Delta sýfýrdan küçük olduðu için reel kök yoktur.";
   }
   else if (Diskriminant == 0) {
   	x1= -b/ (2*a);
       cout << "Delta sýfýra eþit olduðu için çift katlý(çakýþýk) kök vardýr "<<endl;
       cout<<"kök (x1=x2):"<<x1<<endl;
   }
   else {
   	x1 = (-b + sqrt( Diskriminant )) / (2*a);
   	x2 = (-b - sqrt( Diskriminant )) / (2*a);
       cout<< "Delta sýfýrdan büyük olduðu için iki farklý kökü vardýr"<<endl;
       cout<<"x1 = "<< x1 << endl;
       cout<<"x2 = "<< x2 << endl;
   }
}
