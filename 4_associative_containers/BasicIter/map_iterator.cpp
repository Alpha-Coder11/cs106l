#include <iostream>
#include <map>

usng namespace std;

int main()
{
	map<int,int> test_map;
	map<int,int>::iterator iter = test_map.begin();
	while( iter != test_map.end() )
	{
		cout << (*iter).first << " " << (*iter).second << endl;
		iter++;	
	}
	return 0;
}

