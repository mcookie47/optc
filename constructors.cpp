#include "pch.h"
#include "constructors.h"
#include <iostream>

using namespace std;

void Constructors::Power_Levels(int d1, int s1, int b1, int d2, int r1, int h1, int s2, int p1, int m1, int r2)
{
	cout << "Power Levels:";
	//////////////*****DAMAGE REDUCTION*****//////////////
	if (d1 >= 0 && d1 < 5)
	{
		char dam_level[] = "Lv 0";
		cout << "\t" << dam_level;
	}
	else if (d1 >= 5 && d1 < 10)
	{
		char dam_level[] = "Lv 1";
		cout << "\t" << dam_level;
	}
	else if (d1 >= 10 && d1 < 15)
	{
		char dam_level[] = "Lv 2";
		cout << "\t" << dam_level;
	}
	else if (d1 >= 15)
	{
		char dam_level[] = "Max";
		cout << "\t" << dam_level;
	}

	//////////////*****Special*****//////////////

	if (s1 >= 0 && s1 < 10)
	{
		char spec_level[] = "Lv 0";
		cout << "\t" << spec_level;
	}
	else if (s1 >= 10 && s1 < 20)
	{
		char spec_level[] = "Lv 1";
		cout << "\t" << spec_level;
	}
	else if (s1 >= 20)
	{
		char spec_level[] = "Max";
		cout << "\t" << spec_level;
	}

	//////////////*****Bind*****//////////////
	if (b1 >= 0 && b1 < 10)
	{
		char bind_level[] = "Lv 0";
		cout << "\t" << bind_level;
	}
	else if (b1 >= 10 && b1 < 15)
	{
		char bind_level[] = "Lv 1";
		cout << "\t" << bind_level;
	}
	else if (b1 >= 15 && b1 < 20)
	{
		char bind_level[] = "Lv 2";
		cout << "\t" << bind_level;
	}
	else if (b1 >= 20)
	{
		char bind_level[] = "Max";
		cout << "\t" << bind_level;
	}

	//////////////*****Despair*****//////////////
	if (d2 >= 0 && d2 < 10)
	{
		char desp_level[] = "Lv 0";
		cout << "\t" << desp_level;
	}
	else if (d2 >= 10 && d2 < 15)
	{
		char desp_level[] = "Lv 1";
		cout << "\t" << desp_level;
	}
	else if (d2 >= 15 && d2 < 20)
	{
		char desp_level[] = "Lv 2";
		cout << "\t" << desp_level;
	}
	else if (d2 >= 20)
	{
		char desp_level[] = "Max";
		cout << "\t" << desp_level;
	}

	//////////////*****Auto-Heal*****//////////////
	if (h1 >= 0 && h1 < 5)
	{
		char heal_level[] = "Lv 0";
		cout << "\t" << heal_level;
	}
	else if (h1 >= 5 && h1 < 8)
	{
		char heal_level[] = "Lv 1";
		cout << "\t" << heal_level;
	}
	else if (h1 >= 8 && h1 < 12)
	{
		char heal_level[] = "Lv 2";
		cout << "\t" << heal_level;
	}
	else if (h1 >= 12 && h1 < 16)
	{
		char heal_level[] = "Lv 3";
		cout << "\t" << heal_level;
	}
	else if (h1 >= 16 && h1 < 24)
	{
		char heal_level[] = "Lv 4";
		cout << "\t" << heal_level;
	}
	else if (h1 >= 24)
	{
		char heal_level[] = "Max";
		cout << "\t" << heal_level;
	}

	//////////////*****RVC Boost*****//////////////
	if (r1 >= 0 && r1 < 5)
	{
		char rvc_level[] = "Lv 0";
		cout << "\t" << rvc_level;
	}
	else if (r1 >= 5 && r1 < 8)
	{
		char rvc_level[] = "Lv 1";
		cout << "\t" << rvc_level;
	}
	else if (r1 >= 8 && r1 < 12)
	{
		char rvc_level[] = "Lv 2";
		cout << "\t" << rvc_level;
	}
	else if (r1 >= 12 && r1 < 16)
	{
		char rvc_level[] = "Lv 3";
		cout << "\t" << rvc_level;
	}
	else if (r1 >= 16 && r1 < 24)
	{
		char rvc_level[] = "Lv 4";
		cout << "\t" << rvc_level;
	}
	else if (r1 >= 24)
	{
		char rvc_level[] = "Max";
		cout << "\t" << rvc_level;
	}

	//////////////*****Slot Boost*****//////////////
	if (s2 >= 0 && s2 < 5)
	{
		char slot_level[] = "Lv 0";
		cout << "\t" << slot_level;
	}
	else if (s2 >= 5 && s2 < 10)
	{
		char slot_level[] = "Lv 1";
		cout << "\t" << slot_level;
	}
	else if (s2 >= 10 && s2 < 20)
	{
		char slot_level[] = "Lv 2";
		cout << "\t" << slot_level;
	}
	else if (s2 >= 20)
	{
		char slot_level[] = "Max";
		cout << "\t" << slot_level;
	}

	//////////////*****Poison Res*****//////////////
	if (p1 >= 0 && p1 < 10)
	{
		char pois_level[] = "Lv 0";
		cout << "\t" << pois_level;
	}
	else if (p1 >= 10 && p1 < 15)
	{
		char pois_level[] = "Lv 1";
		cout << "\t" << pois_level;
	}
	else if (p1 >= 15 && p1 < 20)
	{
		char pois_level[] = "Lv 2";
		cout << "\t" << pois_level;
	}
	else if (p1 >= 20)
	{
		char pois_level[] = "Max";
		cout << "\t" << pois_level;
	}

	//////////////*****Map Damage Resistance*****//////////////
	if (m1 >= 0 && m1 < 10)
	{
		char map_level[] = "Lv 0";
		cout << "\t" << map_level;
	}
	else if (m1 >= 10 && m1 < 20)
	{
		char map_level[] = "Lv 1";
		cout << "\t" << map_level;
	}
	else if (m1 >= 20)
	{
		char map_level[] = "Max";
		cout << "\t" << map_level;
	}

	//////////////*****Resilience*****//////////////
	if (r2 >= 0 && r2 < 5)
	{
		char res_level[] = "Lv 0";
		cout << "\t" << res_level;
	}
	else if (r2 >= 5 && r2 < 10)
	{
		char res_level[] = "Lv 1";
		cout << "\t" << res_level;
	}
	else if (r2 >= 10 && r2 < 15)
	{
		char res_level[] = "Lv 2";
		cout << "\t" << res_level;
	}
	else if (r2 >= 15)
	{
		char res_level[] = "Max";
		cout << "\t" << res_level;
	}

	cout << endl << endl;
}

void Constructors::Level_Descriptions()
{
	cout << "Damage Reduction:\t\t\t\t\t\tResilience:\n";
	cout << "Lv. 1 (5): Reduces damage taken by 3%\t\t\t\tLv. 1 (5): In extremely rare cases, prevents defeat\n";
	cout << "Lv. 2 (10): Reduces damage taken by 5%\t\t\t\tLv. 2 (10): In rare cases, prevents defeat\n";
	cout << "Lv. 3 (15): Reduces damage taken by 10%\t\t\t\tLv. 3 (20): Occasionally prevents defeat\n\n";
//	cout << "-------------------------------------\n";
	cout << "Charge Specials:\t\t\t\t\t\tMap Damage Resistance:\n";
	cout << "Lv. 1 (10): Reduces Special carge by 1 turn at quest start\tLv. 1 (10): Reduces damage from Map Effects by 50%\n";
	cout << "Lv. 2 (20): Reduces Special carge by 2 turn at quest start\tLv. 2 (20): Makes crew immune to damage from Map Effects\n\n";
//	cout << "-------------------------------------\n";
	cout << "Bind Resistance:\t\t\t\t\t\tPoison Resistance\n";
	cout << "Lv. 1 (10): Reduces Bind duration by 1 turn\t\t\tLv. 1 (10): Reduces damage from poisons by 20%\n";
	cout << "Lv. 2 (15): Reduces Bind duration by 2 turn\t\t\tLv. 2 (15): Reduces damage from poisons by 50%\n";
	cout << "Lv. 3 (20): Reduces Bind duration by 3 turn\t\t\tLv. 3 (20): Makes crew immune to damage from poisons\n\n";
//	cout << "-------------------------------------\n";
	cout << "Despair Resistance:\t\t\t\t\t\tSlot Rate Boost:\n";
	cout << "Lv. 1 (10): Reduces Despair duration by 1 turn\t\t\tLv. 1 (5): Very slightly raises chance of type-matched slots\n";
	cout << "Lv. 2 (15): Reduces Despair duration by 2 turn\t\t\tLv. 2 (10): Slightly raises chance of type-matched slots\n";
	cout << "Lv. 3 (20): Reduces Despair duration by 3 turn\t\t\tLv. 3 (20): Raises chance of type-matched slots\n\n";
//	cout << "-------------------------------------\n";
	cout << "Auto-Heal:\t\t\t\t\t\t\tRCV Boost:\n";
	cout << "Lv. 1 (5): Heals crew by 100 HP at end of turn\t\t\tLv. 1 (5): Boosts crew's RCV by 100\n";
	cout << "Lv. 2 (8): Heals crew by 200 HP at end of turn\t\t\tLv. 2 (8): Boosts crew's RCV by 200\n";
	cout << "Lv. 3 (12): Heals crew by 300 HP at end of turn\t\t\tLv. 3 (12): Boosts crew's RCV by 300\n";
	cout << "Lv. 4 (16): Heals crew by 500 HP at end of turn\t\t\tLv. 4 (16): Boosts crew's RCV by 500\n";
	cout << "Lv. 5 (24): Heals crew by 1000 HP at end of turn\t\tLv. 5 (24): Boosts crew's RCV by 1000\n\n";






}