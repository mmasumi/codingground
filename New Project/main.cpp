#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <string.h>


using namespace std;

#define   MAX_INPUT_LINES       50

char * data[MAX_INPUT_LINES];


void readInput()
{
    int value,count;
    string line;
    ifstream fin;
	fin.open("input.txt",ios::in);
    if ( fin.fail() )
	{
		cout << "No Input File" << endl;
		return;
	}
    while (getline (fin, line)) 
	{
	    stringstream ss;
	    count = 0;
	    ss << line;
        while ( ss )
        {
            ss >> value;
        }
    }    
}



int main()
{
   readInput(); 
   
   return 0;
}

