#include <iostream>
#include<vector>

int getClosingParen(std::string sentence, int position )
{
    std::vector<int> openParenPos;
    for ( int index = position; index < sentence.length(); ++index )
    {
    	if ( sentence[index] == '(' ) 
    		openParenPos.push_back(index);
    	else if ( sentence[index] == ')' && openParenPos.size() > 1 )
            openParenPos.pop_back();
        else if ( sentence[index] == ')' && openParenPos.size() == 1 )
        	return index;
    }
    /*
    Check for error if position given is between an open parenthesis and closing
    */
    std::cout << "Error has occurred, closing parenthesis not found" << std::endl;
    return -1; 
}

int main() 
{
	std::string str = "Sometimes (when I nest them (my parentheticals) too much (like this (and this))) they get confusing.";
	std::cout << getClosingParen( str, 0 ) << std::endl;
	return 0;
}