/* Harjoitus 6
*/
#include <iostream>
using namespace std;
void main(void)
{
	int Raha;
	int Hinta;
	cout << "Paljonko sinulla on rahaa?\n"; // paljonko on rahaa
	cin >> Raha;
	cout << "Paljonko maksaa yksi lihapiirakka?\n"; // paljonko maksaa yksi lihapiirakka
	cin >> Hinta;
	if (Raha > Hinta)
		cout << "Rahaa on jaljella " << Raha - Hinta << " euroa\n";
	else
		cout << "Kehotan sinua paastoamaan.\n";
}