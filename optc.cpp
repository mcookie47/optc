// optc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "constructors.h"
#include <iostream>
const int slot_size = 10;

using namespace std;

struct characters {
	char top_right;
	int slot[10];
};

int main()
{
	//	char top_right = 'zoro';
	//	int * slot;
	int slot1[10] = { 5, 0, 5, 5, 0, 5, 5, 0, 0, 0 };	//zoro
	int slot2[10] = { 5, 5, 5, 5, 0, 5, 0, 0, 0, 0 };	//fujitora
	int slot3[10] = { 0, 5, 5, 5, 0, 5, 5, 0, 0, 0 };	//ain
	int slot4[10] = { 5, 5, 0, 5, 0, 5, 5, 0, 0, 0 };	//mihawk
	int slot5[10] = { 0, 5, 5, 5, 0, 5, 5, 0, 0, 0 };	//jack

	int Dam = 0;	int Heal = 0;
	int Spec = 0;	int Slot = 0;
	int Bind = 0;	int Pois = 0;
	int Desp = 0;	int Map = 0;
	int RVC = 0;	int Res = 0;


	//int slot2[10] = { 0, 5, 5, 5, 0, 5, 0, 0, 0, 0 };	//cavendish
	//int slot5[10] = { 0, 5, 5, 5, 5, 5, 0, 0, 0, 0 };	//law
	cout << "Active Powers:	Dam	Spec	Bind	Desp	RCV	Heal	Slot	Pois	Map	Res\n";
	cout << "zoro" << "\t";
	for (int i = 0; i < slot_size; i++)
	{
		if (slot1[i] == 5)
		{
			cout << "\t +5";
			if (i == 0)
				Dam += 5;
			else if (i == 1)
				Spec += 5;
			else if (i == 2)
				Bind += 5;
			else if (i == 3)
				Desp += 5;
			else if (i == 4)
				RVC += 5;
			else if (i == 5)
				Heal += 5;
			else if (i == 6)
				Slot += 5;
			else if (i == 7)
				Pois += 5;
			else if (i == 8)
				Map += 5;
			else if (i == 9)
				Res += 5;

		}
		else
			cout << "\t --";
	}
	cout << endl;

	//int slot[10] = { 5, 0, 5, 5, 0, 5, 5, 0, 0, 0 };
	cout << "fuji" << "\t";
	for (int i = 0; i < slot_size; i++)
	{
		if (slot2[i] == 5)
		{
			cout << "\t +5";
			if (i == 0)
				Dam += 5;
			else if (i == 1)
				Spec += 5;
			else if (i == 2)
				Bind += 5;
			else if (i == 3)
				Desp += 5;
			else if (i == 4)
				RVC += 5;
			else if (i == 5)
				Heal += 5;
			else if (i == 6)
				Slot += 5;
			else if (i == 7)
				Pois += 5;
			else if (i == 8)
				Map += 5;
			else if (i == 9)
				Res += 5;
		}
		else
			cout << "\t --";
	}
	cout << endl;

	cout << "ain" << "\t";
	for (int i = 0; i < slot_size; i++)
	{
		if (slot3[i] == 5)
		{
			cout << "\t +5";
			if (i == 0)
				Dam += 5;
			else if (i == 1)
				Spec += 5;
			else if (i == 2)
				Bind += 5;
			else if (i == 3)
				Desp += 5;
			else if (i == 4)
				RVC += 5;
			else if (i == 5)
				Heal += 5;
			else if (i == 6)
				Slot += 5;
			else if (i == 7)
				Pois += 5;
			else if (i == 8)
				Map += 5;
			else if (i == 9)
				Res += 5;
		}
		else
			cout << "\t --";
	}
	cout << endl;

	cout << "mihawk" << "\t";
	for (int i = 0; i < slot_size; i++)
	{
		if (slot4[i] == 5)
		{
			cout << "\t +5";
			if (i == 0)
				Dam += 5;
			else if (i == 1)
				Spec += 5;
			else if (i == 2)
				Bind += 5;
			else if (i == 3)
				Desp += 5;
			else if (i == 4)
				RVC += 5;
			else if (i == 5)
				Heal += 5;
			else if (i == 6)
				Slot += 5;
			else if (i == 7)
				Pois += 5;
			else if (i == 8)
				Map += 5;
			else if (i == 9)
				Res += 5;
		}
		else
			cout << "\t --";
	}
	cout << endl;

	cout << "jack" << "\t";
	for (int i = 0; i < slot_size; i++)
	{
		if (slot5[i] == 5)
		{
			cout << "\t +5";
			if (i == 0)
				Dam += 5;
			else if (i == 1)
				Spec += 5;
			else if (i == 2)
				Bind += 5;
			else if (i == 3)
				Desp += 5;
			else if (i == 4)
				RVC += 5;
			else if (i == 5)
				Heal += 5;
			else if (i == 6)
				Slot += 5;
			else if (i == 7)
				Pois += 5;
			else if (i == 8)
				Map += 5;
			else if (i == 9)
				Res += 5;
		}
		else
			cout << "\t --";
	}
	cout << endl ;


	Constructors myconstructor;
	myconstructor.Power_Levels(Dam, Spec, Bind, Desp, Heal, RVC, Slot, Pois, Map, Res);
	myconstructor.Level_Descriptions();
	//cout << "Power Levels:" << "\t" << dam_level;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
