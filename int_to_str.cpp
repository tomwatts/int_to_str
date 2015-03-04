#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

string int_to_str(int n)
{
	string result = "";

	while(n > 0)
	{
		int r = n % 10;

		char c = r + '0';
		result = c + result;

		n /= 10;
	}

	return result;
}

int main(int argc, char* argv[])
{
	int n = 5679;
	string result = int_to_str(n);

	cout << n << " to " << result;

	return EXIT_SUCCESS;
}

