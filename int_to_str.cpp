#include <stdlib.h>
#include <stdio.h>
#include <string.h>

string int_to_str(int n, string result)
{
	result = "";

	while(n > 0)
	{
		int r = n % 10;
		result = result.insert(0, r + '0');

		n -= r;
		n /= 10;
	}

	return result;
}


int main(int argc, char* argv[])
{
	int n = 5679;
	string result;

	result = int_to_str(n, result);

	cout << n << " to " << result;

	return EXIT_SUCCESS;
}

