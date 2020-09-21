//This program creates a vector, fills it with subsequent numbers, sums its elements, and prints the results

#include <iostream>
#include <vector>

const int number_of_elements = 40;
using namespace std;

// This function returns the sum of the elements in a given vector
template <class summable>
inline summable sum_vector_elements(vector<summable> vect)
{
	summable sum = 0;
	for (unsigned int i = 0; i < vect.size(); ++i)
	{
		sum += vect[i];
	}
	return sum;
}

int main()
{
	vector<int> data(0);
	for (int i = 0; i < number_of_elements; ++i)
	{
		data.push_back(i);
	}

	int sum = sum_vector_elements(data);
	cout << "The sum of the vector elements is " << sum << endl;
	return 0;
}