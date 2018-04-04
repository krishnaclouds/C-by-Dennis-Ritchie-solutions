/*

Exercise 1-2: Experiment to find out what happens when prints's argument string contains
\c, where c is some character not listed above (\n is the only character listed previously. 
So it's upto us to experiment with anyothers)

Author: Bala krishna (prince.balakrishna@gmail.com)

*/
#include <stdio.h>

int main(void) {
	printf("audible alert (bell) \\a \a %d\n" , '\a');
	printf("backspace            \\b \b %d\n" , '\b');
	printf("horizontal tab       \\t \t %d\n" , '\t');
	printf("newline              \\n \n %d\n"  , '\n');
	printf("vertical tab         \\v \v %d\n"  , '\v');
	printf("formfeed             \\f \f %d\n"  , '\f');
	printf("carriage return      \\r \r %d\n"  , '\r');
	printf("double quote         \\\" \" %d\n", '\"');
	printf("single quote         \\\' \' %d\n", '\'');
	printf("question mark        \\? \? %d\n"  , '\?');
	printf("backslash            \\\\ \\ %d\n", '\\');
	
	return 0;
}
