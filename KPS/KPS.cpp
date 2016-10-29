#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	int koneenVoitot = 0;
	int koneenValinta = 0;
	int kierrokset = 0;
	srand(time(0));
	char valintaMerkki;
	int merkinKoodi;
	int voitto = 0;

	cout << "Welcome" << endl;
	cout << "How many rounds do you want to play :)" << endl;
	cin >> kierrokset;

	for (int i = 0; i < kierrokset; i++)
	{
		do
		{
			cout << "It's your time to choose " << endl;
			cin >> valintaMerkki;
		} while (!(valintaMerkki == 'r' || valintaMerkki == 's' || valintaMerkki == 'p')); //(valintaMerkki != 'r'||'s') ei toimi

		koneenValinta = rand() % 3 + 1;

		if (koneenValinta == 1)
		{
			cout << "rock" << endl;
		}
		else if (koneenValinta == 2)
		{
			cout << "paper" << endl;
		}
		else if (koneenValinta == 3)
		{
			cout << "scissors" << endl;
		}

		if (valintaMerkki == 'r')
		{
			cout << "rock" << endl;
			merkinKoodi = 1;
			cout << merkinKoodi << endl;
		}
		else if (valintaMerkki == 'p')
		{
			cout << "paper" << endl;
			merkinKoodi = 2;
			cout << merkinKoodi << endl;
		}
		else if (valintaMerkki == 's')
		{
			cout << "scissors" << endl;
			merkinKoodi = 3;
			cout << merkinKoodi << endl;
		}
		//voiton tarkastelu

		if (merkinKoodi == koneenValinta)
		{
			cout << "tie" << endl;
		}
		else if (merkinKoodi == 1 && koneenValinta == 2)
		{
			cout << "you lose" << endl;
			koneenVoitot = i++;
		}
		else if (merkinKoodi == 2 && koneenValinta == 3)
		{
			cout << "you lose" << endl;
			koneenVoitot = i++;
		}
		else if (merkinKoodi == 3 && koneenValinta == 1)
		{
			cout << "you lose" << endl;
			koneenVoitot = i++;
		}
		else
		{
			cout << "you win" << endl;
			voitto = i++;
		}
	}
}