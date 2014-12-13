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
    int value;
    string line;
    ifstream fin;
    stringstream ss;
	fin.open("sort.txt",ios::in);
    if ( fin.fail() )
	{
		cout << "No Input File" << endl;
		return;
	}
    while (getline (fin,line)) 
	{
	    ss << line;
	    cout << line;
        cout << endl;
    }    
}

void generateSortFile()
{
    int i, j;
    string line;
    ofstream fout;
    stringstream ss;
    fout.open("sort.txt", ios::out );
    for ( i=0; i<(rand()%5+5); i++)
    {
        for (j=0; j<(rand()%10+5); j++)
        {
            fout << (int)(rand()%100) << " ";
        }
        fout << endl;
    }
}



int main()
{
   readInput(); 
//   generateSortFile();
   return 0;
}

