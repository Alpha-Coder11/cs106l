#include <iostream>
#include <vector>
using namespace std;
/*
* This function will take a vector and variable of certain value. 
* It will could how many times a certain value is repeated
*/
int count_occurrences(vector<int>& series, int value)
{
	int count = 0;
	vector<int>::iterator iter = series.begin();
	for (iter; iter != series.end(); iter++)
	{
		if (*iter == value)
		{
			count++;
		}
	}
return count;

}

int main()
{
	
	return 0;
}
