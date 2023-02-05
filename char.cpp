#include<iostream>
using namespace std;

void practiceCharMethod1(char c);
void practiceCharMethod2(char c);
void practiceCharMethod3(char c);
void practiceCharMethod4(char c);

int main()
{
  practiceCharMethod1('f'); // Test with different characters
  
  practiceCharMethod2('%'); // Test with different characters
  
  practiceCharMethod3('L'); // Test with different characters
  
  practiceCharMethod4('a'); // Test with different characters
  
  return 0;
}

// ONLY COPY & PASTE THE SPECIFIC METHOD AS YOUR ANSWER

/* The function must print the inverse capitalization of the character passed as an argument */
  
void practiceCharMethod1(char character)
{
  int result = 0;
    
  //YOUR CODE GOES HERE
    
  cout << "Inverse Capitalization: " << (char) result << endl;
}
  
/* Print only digits or alphanumeric characters. If other print "none". */
  
void practiceCharMethod2(char character)
{
  cout << "The character is: ";
  
  //YOUR CODE GOES HERE
}

/* You will need to verify the character passed as an argument. 
  Some times it can only be a space or a punctuation character. Validate it before using it. 
  If the character is other than a space or a punctuation, then it is okay to use it.
*/
  
void practiceCharMethod3(char character)
{
  bool okToUse;
    
  //YOUR CODE GOES HERE
    
  cout << (okToUse ? "Character is valid" : "Character is not valid") << endl;
}
  
/* You will need to verify if the character passed as an argument is equal to 'x', 'y', or 'z'
  and if so, print "last three letters". 
  It must be CASE INSENSITIVE, so if 'X', 'Y' or 'Z' is given, it must also print "last three letters". Otherwise you must print "none".
*/
  
void practiceCharMethod4(char character)
{
  // YOUR CODE HERE
  
}

