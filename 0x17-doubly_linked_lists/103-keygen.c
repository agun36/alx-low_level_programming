#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * generate_key - Generates a key based on the username.
 * @username: The username for which to generate the key.
 *
 * Return: The generated key.
 */
char *generate_key(const char *username)
{
	size_t username_len = strlen(username);
	char *key = malloc(username_len + 1);
	size_t i;

	if (key == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		exit(EXIT_FAILURE);
	}

	for (i = 0; i < username_len; i++)
	{
		key[i] = username[i] - i;
	}
	key[i] = '\0';

	return (key);
}

/**
 * main - Entry point.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s username\n", argv[0]);
		return (EXIT_FAILURE);
	}
	char *username = argv[1];
	char *key = generate_key(username);

	printf("%s\n", key);
	free(key);
	return (0);
}
