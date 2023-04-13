#include "main.h"

/**
 * is_delim - checks if character is delimeter
 * @c: The character to check
 * Return: 1 if true else 0
 */
int is_delim(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - count the number of words int the string
 * @str: the string to count
 * Return: total number of words
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str && !is_delim(*str))
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}

		str++;
	}
	return (count);
}
/**
 * next_word - gets the begining of a word
 * @str: The string to scan
 * Return: The pointer to the begining of the word
 */
char *next_word(char *str)
{
	while (*str && is_delim(*str))
	{
		str++;
	}
	return (str);
}

/**
 * end_word - Gets the end of a word
 * @str: The string to scan
 * Return: a pointer to the end of the word
 */
char *end_word(char *str)
{
	while (*str && !is_delim(*str))
	{
		str++;
	}
	return (str);
}
/**
 * strtow - Splits a string into words
 * @str: The string to be split
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	int num_words, word_len, j, i = 0;
	char **words, *word, *word_start, *word_end;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);

	if (num_words < 1)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));

	if (words == NULL)
		return (NULL);
	while (*str)
	{
		if (is_delim(*str))
			str++;
		word_start = next_word(str), word_end = end_word(word_start);
		word_len = word_end - word_start;

		if (word_len > 0)
			word = malloc(sizeof(char) * (word_len + 1));
		if (word == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < word_len; j++)
		{
			word[j] = *(word_start + j);
		}
		word[word_len] = '\0';
		words[i++] = word;
		str = word_end;
	}
	words[i] = NULL;
	return (words);
}
