#include <iostream>
#include <ctime>
using namespace std;
/*John Valaderz-Rodriguez
CoinDropper
10/29/19
*/
int money;  //these all set up the variables for the coins
int dropper(); //declaring the function
int main() {
	srand(time(NULL));
	while (true && !false) {
		dropper();

	}
}
int dropper() { //defining the function

	if (rand() % 100 + 1 >= 70) {//gives dogecoin if the random number is between 75 and 100
			cout << "You got 1 cent rupee boi" << endl;
			money += 1;
			cout << "You now have " << money << " rupees." << endl;
			system("pause");
	}
	if (rand() % 100 + 1 < 70 && rand() % 100 + 1 >= 50) {//gives pokedollars when number is between 50 and 70(20%)
			cout << "You got 5 cent rupee noiceee" << endl;
			money += 5;
			cout << "You now have " << money << " rupees." << endl;
			system("pause");
	}
	if (rand() % 100 + 1 < 51 && rand() % 100 + 1 >= 40) {//gives luigi coins (which subtracts money) when number is between 50 and 40(10%)
			cout << "You got 10 rupee cented bois." << endl;
			money += 10;
			cout << "You now have " << money << " rupees." << endl;
			system("pause");
	}
	if (rand() % 100 + 1 < 36 && rand() % 100 + 1 >= 40) {//gives geo when number is between 35 and 40(5%)
			cout << "You got 20 rupeed/cented bois" << endl;
			money += 20;
			cout << "You now have " << money << " rupees." << endl;
			system("pause");
	}
	if (rand() % 100 + 1 < 36) {//gives geo when number is between 34 and 0
		cout << "You lost 20 cents in rupees (bad boi)." << endl;
		money -= 20;
		cout << "You now have " << money << " rupees." << endl;
		system("pause");
	}
		return 1;
}


