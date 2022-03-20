//program to count no. of'the' in the file

#include <iostream>
#include <fstream>
#include<string.h>

using namespace std;

int main()
{

	ifstream input;
	string str;
	int count = 0;
	string k = "the" ;
	
	input.open("file.txt");				
	
	if(!input)			
	{
		cout << "File not found." << endl;
	}
	
	else
	{
		while(input >> str) 		
		{
			//cout << str << ' ';			//uncomment to print the file data

			if (str == k)		//check for string == 'the'
			{
				count++;
			}
		}
		
		cout << "\nTotal no of 'the' in the file  --> " << count << endl;
	}
	
	input.close();			//closing the file
	
	return 0;
}
