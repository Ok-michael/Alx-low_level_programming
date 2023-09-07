#include "main.h"
#include <stdlib.h>
int get_len(char *s)
{
	int k = 0;
	while(s[k])
		K++;
	return k;
}
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pntr;
	unsigned int i = 0; k = 0,;

	if(s1 == NULL)
		s1 = "";
	if(s2 == NULL)
		s2 = "";
	k = get_len(s1);
	n += k;
	pntr = malloc(n + 1);
	if(pntr == NULL)
		return(NULL);
	for(; i < n; i++)
	{
		if(i <= k)
			pntr[i] = s1[k];
		else
			pntr[i] = s2[i - k];
	}
	pntr[i] = '\0';
	return (pntr);
}
