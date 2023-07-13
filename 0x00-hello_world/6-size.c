#include <stdio.h>
/**
  *main -Entry point
  *return: always 0 (success)
  */
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(S)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float int: %d byte(s)", sizeof(float int));
	return (0);
}
