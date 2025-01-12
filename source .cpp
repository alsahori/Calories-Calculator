#include<iostream>
using namespace std;
int main()

{
//declaring variables
	float minutes, weight, metSlowly, metQuickly, metJog, caloriesBurnedSlowly, caloriesBurnedQuickly, caloriesBurnedJog, caloriesWantToBurn;
	
	metSlowly = 2;
	metQuickly = 3;
	metJog = 8.8;

	//prompt user for duration (in minutes) exercised
	cout << " How many minutes did you exercise? " << endl;
	cin >> minutes ;


	// prompt user for weight in kilograms
	cout << " What is your weight in kilograms? " << endl;
	cin >> weight ;


	// total calories burned = duration (in minutes)*(MET* 3.5 * weight in kg)/200.
	caloriesBurnedSlowly = (minutes) * (metSlowly * 3.5 * weight) / 200;
	caloriesBurnedQuickly = (minutes) * (metQuickly * 3.5 * weight) / 200;
	caloriesBurnedJog = (minutes) * (metJog * 3.5 * weight) / 200;


	// output the total calories burned slowly, quickly, and jog//

	cout << " When you walk slowly you will burn " << caloriesBurnedSlowly << " calories." << endl;
	cout << " When you walk quickly you will burn " << caloriesBurnedQuickly << " calories.\n";
	cout << " When you jog you will burn " << caloriesBurnedJog << " calories." << endl;







	return 0;

}


/*
How many minutes did you exercise?
60
 What is your weight in kilograms?
45.4
 When you walk slowly you will burn 95.34 calories.
 When you walk quickly you will burn 143.01 calories.
 When you jog you will burn 419.496 calories.

C:\Users\eyada\source\repos\Homework programming lab 1\x64\Debug\Homework programming lab 1.exe (process 36872) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .


*/