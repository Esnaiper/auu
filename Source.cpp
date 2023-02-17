#include <iostream>
using namespace std;

int main() {



	int hola[10] = {1, 2, 3, 4,5,6,7,8,9,10};
	int MIAU[10] = { 0, 0, 0, 0,0,0,0,0,0,0 };
	int* adios = hola  ;

	for (int i = 0; i < 10; i++)
	{
           MIAU[i] = (int)adios + i;
		
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << MIAU[i] << endl;

	}
}