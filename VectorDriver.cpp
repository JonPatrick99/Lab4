// VectorDriver.cpp
// Jon Caldwell
// 15 Oct, 2018
// COSC 2030

#include "VectorDriver.h" // Using the .h file that had functions that are being used in this .cpp file.

int main() {
	cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;

	vector<short> sample_vector(1); // Creation of the sample vector.

	cout << "new vector: ";
	print(sample_vector); // This prints out the sample_vector.
	cout << endl;

	add_numbers(sample_vector); // This adds 10 random numbers into the vector.


	cout << "filled vector: ";  
	print(sample_vector);		// This prints out the sample vector that is given on line 6. 
	cout << endl;               
	cout << "filled vector: ";  
	print_even(sample_vector);  // This prints out the numbers in the 0,2,4,6, etc positions.
	cout << endl;               
	cout << is_present(sample_vector, 0); // Checks if the number 0 is present in the vector.
	cout << endl;
	cout << is_present(sample_vector, 31); // Checks if the number 31 is present in the vector.
	cout << endl;

	cout << "Sorted Vector:";
	sort_vector(sample_vector); // This sorts the vector into ascending order.
	cout << endl;
	print(sample_vector); // This prints out the sample vector.

	vector<short> new_vector(5); // Creeates a new vector.
	print(new_vector); // Prints out the new givent vector.
	cout << endl;
	add_numbers(new_vector); // Adds 10 random numbers to the new vector.
	print(new_vector);
	cout << endl;
	print_even(new_vector); // Prints the numbers in the 0,2,4,6, etc positions of the new vector
	cout << endl;
	is_present(new_vector, 0); // Checks to see if the number 0 is in the new vector.
	cout << endl;
	sort_vector(new_vector); // This sorts the new vector in ascending order.
	cout << endl;



	cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl; // prints out the sum of the elements in the sample vector.
	cout << "sum of vector's elements: " << compute_sum(new_vector) << endl; // prints out the sum of the elements in the new vector.
	cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
	system("pause");
	return 0;
}