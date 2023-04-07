#include <iostream>
#include <stdlib.h>

using namespace std;


void random(int random)
{

}

int main()
{
	int Ball[45];


	for (int i = 0; i < 45 ; ++i)
	{
		Ball[i] = i + 1;
	}

	for (int Value : Ball)
	{
		cout << Value << endl;
	}



	

	return 0;
}