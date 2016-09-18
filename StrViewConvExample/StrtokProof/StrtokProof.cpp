#include <string>
#include <cstdio>
#include <algorithm>

int main()
{
	using namespace std;

	char str[] = "Apple,Orange,Mango";
	char check[sizeof(str)];
	const char s[2] = ",";
	char *token;

	/* get the first token */
	token = strtok(str, s);

	/* walk through other tokens */
	while (token != NULL)
	{
		printf("%s\n", token);

		memcpy(check, str, sizeof(check));

		std::replace(begin(check), end(check)-1, 0, 219);

		printf("%s\n", check);

		token = strtok(NULL, s);
	}

	return(0);
}