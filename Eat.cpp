#include <iostream>;
#include <string>;
#include <random>;
#include <time.h>;

using namespace std;

struct restaurant
{
	string place;

};

int main()
{
	srand(time(NULL));
	string a, b, c, d;

	restaurant name[60];
	name[0].place = "Bone Daddy's";
	name[1].place = "Hayashi";
	name[2].place = "Ohana Japanese Steakhouse";
	name[3].place = "P.F. Changs";
	name[4].place = "Burger Fi";
	name[5].place = "Aloha BBQ";
	name[6].place = "Gorditos";
	name[7].place = "Polibertos";
	name[8].place = "Cantina laredo";
	name[9].place = "Burger King";
	name[10].place = "Twisted Root";
	name[11].place = "Aspen Creek";
	name[12].place = "Whataburger";
	name[13].place = "Joes Crab Shack";
	name[14].place = "Freebirds";
	name[15].place = "Chik-Fil-A";
	name[16].place = "Taco Bell";
	name[17].place = "Mcdonalds";
	name[18].place = "Sonic";
	name[19].place = "Torchys Taco";
	name[20].place = "Canes";
	name[21].place = "Buffalo Wild Wings";
	name[22].place = "River Smiths";
	name[23].place = "Lubbock Breakfast House and Grill";
	name[24].place = "Dickeys";
	name[25].place = "Rudy's";
	name[26].place = "World of Beer";
	name[27].place = "Walk-Ons";
	name[28].place = "Dairy Queen";
	name[29].place = "KFC";
	name[30].place = "Cancun";
	name[31].place = "Raider Burrito";
	name[32].place = "Taqueria Guadalajara";
	name[33].place = "Taqueria Jalisco";
	name[34].place = "Flips Tavern";
	name[35].place = "Steak Express";
	name[36].place = "Dominoes";
	name[37].place = "Pizza Hut";
	name[38].place = "Cheddars";
	name[39].place = "Jasons Deli";
	name[40].place = "Outback Steakhouse";
	name[41].place = "Applebee's";
	name[42].place = "IHOP";
	name[43].place = "Denny's";
	name[44].place = "Jimmy Johns";
	name[45].place = "Subway";
	name[46].place = "Wingstop";
	name[47].place = "Chinese Star Buffet";
	name[48].place = "Gators";
	name[49].place = "Blue Sky";
	name[50].place = "Fuzzys";
	name[51].place = "Longhorn Steakhouse";
	name[52].place = "Chuy's";
	name[53].place = "BJ's Brewhouse";
	name[54].place = "Carinos";
	name[55].place = "Red Robin";
	name[56].place = "Texas Roadhouse";
	name[57].place = "Logans Roadhouse";
	name[58].place = "Orlandos";
	name[59].place = "The Caboose";



	b = "go";
	c = "yes";

	cout << "Hello, seems like you want to know where to go eat" << endl;
	cout << "Let me help you with that" << endl;
	cout << "These are your options:" << endl;

	for (int i = 0; i < 60; i++)
	{
		cout << name[i].place << endl;
	}

	cout << "I will spin a roulette containing restaurants listed above to go eat at" << endl;
	cout << endl;
	cout << endl;

	cout << "Type go to spin roulette!" << endl;
	cin >> a;

	if (a == b)
	{
		cout << "Roulette is spinning!" << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << "The place I picked for you is:" << endl;

		int Randnum = rand() % 61;
		cout << name[Randnum].place << endl;
	}

	cout << "Would you like to spin again" << endl;

	cin >> d;

	if (d == c)
	{
		cout << "The place I picked for you is:" << " ";
		cout << name[Randnum].place << endl;
	}
	


	


	

	

	return 0;
}