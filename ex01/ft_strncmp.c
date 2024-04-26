#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int c = 0;
    while (s1[c]||s2[c] && c<n)
    {
        if (s1[c] < s2[c])
            return(-1);
        if (s1[c] > s2[c])
        return(1);
     c++;
    }
return(0);
}



int main()
{
    char cad[]="programacion";
    char cad2[]="programacion";
    unsigned n = 8;
	printf("%i", ft_strncmp(cad, cad2, n));
    return(0);
}
