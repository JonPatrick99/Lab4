// VectorDriver.h
// Jon Caldwell
// 15 Oct, 2018
// COSC 2030


typedef unsigned long ulong;  //
							  //
#include <iostream>           //
#include <vector>             //
#include <algorithm>          // These are the functions that will be used in the VectorDriver.h file
							  //
using std::cout;			  //
using std::endl;			  //
using std::vector;			  //

void fill_vector(vector<short> &data) {     // This is to fill in the pre-allocated space for the vector.
	for (ulong i = 0; i < data.size(); i++) {     
		data.at(i) = i;
	}
}

void print(const vector<short> &data) { // This is to tell the compiler to print the function.
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 1; i < data.size(); i++) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}
 
short compute_sum(const vector<short> &data) {               // This is using iterator to sum up the elements in the vector.
	std::vector<short>::const_iterator iter = data.begin();

	short sum = 0;
	while (iter != data.end()) {
		sum += *iter;
		iter++;
	}

	return sum;
}

void add_numbers(vector<short> &data)     // This is finding 10 random numbers into the vectors. 
{
	for (int i = 0; i < 9; i++)
	{
		(data.push_back(rand() % 30));
	}
}

void print_even(const vector<short>& data) // This is printing only the numbers in the spots 0,2,4,6, etc in the vector.
{
	if (data.empty()) {
		cout << "<empty>";
	}
	else {
		cout << "<" << data.at(0);
		for (ulong i = 2; i < data.size(); i = i + 2) {
			cout << ", " << data.at(i);
		}
		cout << ">";
	}
}

bool is_present(const vector<short> &data, short value)    // This will test if the value of a given number is there. If it is there it will print true, if it is not, it will print false.
{
	std::vector<short>::const_iterator iter = data.begin();

	while (iter != data.end())
	{
		if (*iter == value)
		{
			return true;

		}
		iter++;
	}
	return false;
}

void sort_vector(vector<short> &data)                         // This will sort the numbers in ascending order, which will make it easier for us to view the output.
{
	std::vector<short>::iterator iter_begin = data.begin();
	std::vector<short>::iterator iter_end = data.begin();

	while (iter_end != data.end())
	{
		iter_end++;
	}
	std::sort(iter_begin, iter_end);

}