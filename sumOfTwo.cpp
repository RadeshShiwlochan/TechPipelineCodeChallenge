#include <iostream>
#include <array>

bool sumOfTwo( std::array<int, 4> arrOne, std::array<int, 6> arrTwo, int target )
{
	for ( int i = 0; i < arrOne.size(); ++i )
	{
		for ( int j = 0; j < arrTwo.size(); ++j )
		{
			if ( arrOne[i] + arrTwo[j] == target )
				return true;
		}
	}
	return false;
}

int main () 
{
	std::array<int, 4> a = { 1, 2, 3, 4 };
	std::array<int, 6> b = { 9, 8, 7, 6, 1, 3};
	std::cout << sumOfTwo( a, b, 10 ) << std::endl;
	return 0;
}