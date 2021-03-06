/*You need to store sales for seven different types of salsa: mild, medium, hot, sweet, fruit, verde, and zesty.
You will need two parallel 7 element arrays.An array of strings to hold the salsa names and an array of integers
holding the number of jars sold during the past month for each type of salsa..
Create a string array and initialize it with the salsa types.The program should prompt the user to enter
the number of jars sold for each type.Use input validation with a loop to ensure that negative values are not input.
Once the data is input, the program should display a report that shows sales for each salsa type, total
sales(total number of jars sold) and the names of the highestand lowest selling products.*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{
	// initialize variables
	int sum = 0;
	int high = -1;
	int low = 101;
	string highString = "", lowString = "";

	string salsa[7] = { "mild", "medium", "hot", "sweet", "fruit", "verde", "zesty" };
	double sales[7];

	for (int i = 0; i < 7; i++)
	{
		cout << "Please enter a sales amount for " << salsa[i] << ": ";
		cin >> sales[i];
		if (sales[i] < 0) {
			cout << "Input is a negative number, please try again" << endl;
			i--;
		}

		// test if salsa is the highest
		if (sales[i] > high) {
			high = sales[i];
			highString = salsa[i];
		}
		// test if salsa is the lowest
		if (sales[i] < low) {
			low = sales[i];
			lowString = salsa[i];
		}
		sum += sales[i];
	}
	cout << endl << endl;

	for (int i = 0; i < 7; i++)
	{
		cout << "Jars sold last month for " << salsa[i] << " is: " << sales[i] << endl;
	}
	cout << endl << endl;
	double average = sum / 7;
        cout << "Your total is " << sum << endl;
	cout << "High was " << highString << endl;
	cout << "Low was " << lowString << endl;
	// Show average value
	cout << "The avrage is " << average << endl;

}

/*Sample output from program
Jars sold last month of mild : 11
Jars sold last month of medium: 22
Jars sold last month of hot : 33
Jars sold last month of sweet : 44
Jars sold last month of fruit : 55
Jars sold last month of verde : 66
Jars sold last month of zesty : 77

Total Sales: 308
High Seller: zesty
Low Seller : mild
Press any key to continue . . .
*/
