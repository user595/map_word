// map_word.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdafx.h"
#include <map>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>


int _tmain(int argc, _TCHAR* argv[])
{
	using namespace std;
	map<string, int> m1;
	char s;
	vector <char> characters;  

	ifstream infile("data.txt");
	while (!infile.bad() && !infile.eof())
	{
		// Dump the contents of the file to cout.
		
		//cout << infile.rdbuf();
		s = infile.get();
		characters.push_back(s);
		
	}
	infile.close();
	
	vector<char>::iterator c1_Iter;
	c1_Iter = characters.begin();
    //*c1_Iter = 20;
    for (; c1_Iter != characters.end(); c1_Iter++)
    {
        cout << " " << *c1_Iter;
		//break;
    }
    cout << endl;
	
	cin >> s;

	return 0;
}
