#include "../includes/stringMethodsLib.h"

static int	num_words(char const *s, char c) {
	int	i = 0;
	int	n = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			n++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (n);
}

static int	word_len(char const *s, char c) {
	int	cnt = 0;;
	while (*s == c)
		s++;
	while (*s && *s != c)
	{
		cnt++;
		s++;
	}
	return (cnt);
}

static char	**helper(char **res, char const *s, char c) {
	int	i = -1;
	int	j = 0;;
	int	n = num_words(s, c);
	int	k;
	while (++i < n)
	{	
		k = 0;
		res[i] = (char *)malloc(word_len(&s[j], c) + 1);
		if (!res[i])
			res[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			res[i][k++] = s[j++];
		res[i][k] = '\0';
	}
	res[i] = NULL;
	return (res);
}

char**  split(char const *s, char c) {
	if (!s)
		return (NULL);
	char **res = (char **)malloc(sizeof(char *) * (num_words(s, c) + 1));
	if (!res)
		return (NULL);
	return (helper(res, s, c));
}
