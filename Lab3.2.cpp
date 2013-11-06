/******************************************************** 
 COSC 501 
 Lab 3.2 
 Elliott Plack 
 19 SEP 2013           Due date: 23 SEP 2013 
 Problem: Write a program that determines a baseball
	player’s slugging percentage using a formula. Inputs
	are singles, doubles, triples, homeruns, and at bats.
 Algorithm: The program will calculate a baseball
	player’s slugging percentage using the standard
	formula, which is (slugging_percentage =
	(singles + 2 * doubles + 3 * triples + 4 * home_runs) / at_bats).
********************************************************/


#include <iostream>  // for input output 
#include <iomanip>   // to manipulate output 
#include <cmath>	 // for math stuff
using namespace std;

int main()
{
	/* Get inputs. I always set them to zero to clear any previous junk values */
	int singles(0), doubles(0), triples(0), home_runs(0), at_bats(0); // input varibles
	double slugging_percentage(0); // output variable

	/* Gets the inputs from the user */
	cout << "This program will determine a baseball player's slugging percentage.\n";
	cout << "Enter the following statistics: singles, doubles, triples, home runs,\n"
		<< "and at bats below: \n";
	cin >> singles >> doubles >> triples >> home_runs >> at_bats;

	/* assignment statement */
	slugging_percentage = (singles + 2 * doubles + 3 * triples + 4 * home_runs) / double(at_bats);
	
	/* set the precision for output numbers */
    cout.setf(ios::fixed); 
    cout.setf(ios::showpoint); 
    cout.precision(3);

	/* output */
	cout << "The player's slugging percentage is: " << slugging_percentage << endl;

	return 0;
}