#include <iostream>
#include <ctime>
using namespace std;

//Genetic algorithm to solve knapsack problem

//declaring constant array of the 7 items weight, max carried weight,
//gene size and population size
const int WEIGHT[7] = { 41,50,49,59,55,57,60 };
const int MAX_WEIGHT = 170;

//this is the fixed parameter for the algorithm
const int GENE = 7;
const int POPULATION_SIZE = 5;

//declaring chromosome structure
int chromosome[POPULATION_SIZE][GENE];

//function to initialize population
void initPopulation()
{
	for (int i = 0; i < POPULATION_SIZE; i++)
	{
		for (int j = 0; j < GENE; j++)
		{
			chromosome[i][j] = rand() % 2;
		}
	}
}

void printChromosome()
{
	for (int i = 0; i < POPULATION_SIZE; i++)
	{
		cout << "Chromosome: ";
		for (int j = 0; j < GENE; j++)
		{
			cout << chromosome[i][j];
		}
		cout << endl;
	}

}

int main()
{
	initPopulation();
	printChromosome();
}