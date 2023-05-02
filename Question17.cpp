#include <iostream>
using namespace std;

int main()
{
	// step 1  initialize a variable to hold a 16-digit CCN
	long long int CCN = 4556737586899855; // valid
	// long long int CCN = 4556737586899856; // invalid
	cout << "Original CCN: " << endl;
	cout << CCN << endl << endl; 

	int rightNum = CCN % 10; 
	cout << "Rightmost digit: " << endl;
	cout << rightNum << endl << endl; 

	CCN = CCN / 10;
	cout << "CCN without rightmost digit: " << endl
		<< CCN << endl << endl; 

	cout << "Reversed CCN (after ommitting rightmost digit): " << endl;
	int CCN_ary[15];
	for (int i = 0; i < 15; i++)
	{
		CCN_ary[i] = CCN % 10;
		CCN = CCN / 10;
		cout << CCN_ary[i]; 
	}
	cout << endl << endl;

	cout << "After multipling digits in odd positions by 2 (with spaces added):" << endl;
	for (int i = 0; i < 15; i = i + 2)
	{
		CCN_ary[i] = CCN_ary[i] * 2; 
	}
	for (int i = 0; i < 15; i++)
	{
		cout << CCN_ary[i] << " ";
	}
	cout << endl << endl; 

	cout << "After subtracting 9 from digit if digit is greater than 9: " << endl;
	int sum = 0; // for next step doing a bit of combining into this step
	for (int i = 0; i < 15; i++)
	
		if (CCN_ary[i] > 9)
		{
			CCN_ary[i] = CCN_ary[i] - 9; 
		}
		else
		{
			CCN_ary[i] = CCN_ary[i];
		}
		
		cout << CCN_ary[i]; 

		sum = sum + CCN_ary[i]; // again for next step
	
	cout << endl << endl;

	cout << "Sum of digits is " << sum << endl << endl; 

	int sumMod10 = sum % 10;
	cout << "Sum mod 10 is " << sumMod10 << " and rightmost digit is " << rightNum << "." 
		<< endl;

	if (sumMod10 == rightNum)
	{
		cout << "These are equal, so the CCN is Valid." << endl << endl;
	}
	else
		cout << "These are NOT equal, so the CCN is INVALID." << endl << endl;
	
	
	return 0;
}
