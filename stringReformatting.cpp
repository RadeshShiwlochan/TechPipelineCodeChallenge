#include<iostream>

std::string stringReformatting( std::string str, int groupCount )
{
	int counter = 0;
	std::string reformatStr = "";
	for ( int i = str.length() - 1; i >= 0; --i )
	{
		if ( counter == groupCount )
		{
			reformatStr = "-" + reformatStr;
			counter = 0;
		}
        if ( str[i] != '-' )
        {
        	reformatStr = str[i] + reformatStr;
        	counter++;
        }
	}
	return reformatStr;	
}

int main() 
{
	std::string s = "2-4a0r7-4k";
	std::cout << stringReformatting( s, 3 ) << std::endl;
	std::cout << stringReformatting( s, 4 ) << std::endl;
	return 0;
}