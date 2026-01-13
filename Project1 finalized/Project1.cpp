// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
using namespace std;




struct State_Population
{
	char state_name[51];
	double population;
};

void selectionSort(State_Population* a, int sizeofArray) //selection sort algorithm, will compare with all numbers till it is the smallest one then move to next place
{
	int count = 0;
	State_Population temp;
	for (int i = 0; i < sizeofArray; i++)
		for (int j = i + 1; j < sizeofArray; j++)
		{
			count++;
			if (a[j].population < a[i].population)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}

	cout << "\nSelection Sort counts: " << count << "\n";

}

void print_State_info(State_Population* a, int sizeofArray) //for loop that displays state name and population using the struct
{
	for (int i = 0; i < sizeofArray; i++)
	{
		cout << "\nState: " << a[i].state_name;
		cout << "\t\tPopulation: " << a[i].population;
	}
}

double meanPop(State_Population* data, int i) //recursive mean function, if 0 then its just the population given, else it does the equation
{

	if (i == 0)
		return data[i].population;
	else
		return meanPop(data, i - 1) * (1 * i / ((i + 1) * 1.0)) + data[i].population / ((i + 1) * 1.0);

}

double medianPop(State_Population* data, int i, string& medState) //median function, if arraysize is odd then population and name is just i/2. if even then takes avg of two middle states and populations
{
	if (i % 2 == 1)
	{
		medState = data[i / 2].state_name;
		return data[i / 2].population;
	}
	else
	{
		int mid1 = (i / 2) - 1;
		int mid2 = (i / 2); 
		medState = "The average of " + string(data[mid1].state_name) + " and " + string(data[mid2].state_name);
		return (data[mid1].population + data[mid2].population) / 2;
	}

}

int main()
{
	ifstream in_stream;
	ofstream out_stream;
	in_stream.open("data.txt");
	out_stream.open("outfile.txt");

	State_Population record[51];
	for (int i = 0; i < 51; i++)
	{
		in_stream >> record[i].state_name;
		in_stream >> record[i].population;
		cout << "\nState: " << record[i].state_name;
		cout << "\t\tPopulation: " << record[i].population;
	}

	selectionSort(record, 51);
	print_State_info(record, 51);

	cout << "\n\nThe mean of the populations is " << meanPop(record, 51-1);


	string medState;
	cout << "\n\nThe median data, State(s): "<< medState << "\tPopulation:" << medianPop(record, 51, medState)<<endl;


	in_stream.close();
	out_stream.close();
	return 0;

}
