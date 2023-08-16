#include <iostream>

using namespace std;

pair<int,int> find_range(int distance)
{
	int min = static_cast<int>(distance * 0.08 + 100);
	int max = static_cast<int>(distance * 0.36 + 750);
	return make_pair(min,max);
}

int main()
{
	int distance = 6452;

	//int [min, max] =  find_range(distance);
	auto [min,max] = find_range(distance);
	cout << "Range is between " << min << "and" << max << endl;

	return 0;

}
