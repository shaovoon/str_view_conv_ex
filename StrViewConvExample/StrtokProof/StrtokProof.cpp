#include <string>
#include <cstdio>
#include <algorithm>

int main()
{
	using namespace std;

	char str[] = "Apple,Orange,Mango";
	/* dup_arr will contains str later */
	char dup_arr[sizeof(str)];
	const char s[2] = ",";
	char *token;

	/* display str address */
	printf("str address:%p\n", str);

	/* get the first token */
	token = strtok(str, s);

	/* walk through other tokens */
	while (token != NULL)
	{
		/* display token */
		printf("%s\n", token);
		/* display token address */
		printf("token address:%p\n", token);

		/* copy str into dup_arr */
		memcpy(dup_arr, str, sizeof(dup_arr));
		/* replace the null char with \x219 */
		std::replace(begin(dup_arr), end(dup_arr)-1, 0, 219);
		/* display dup_arr */
		printf("%s\n", dup_arr);

		/* get next token */
		token = strtok(NULL, s);
	}

	return(0);
}