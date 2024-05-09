
char *ft_strcat(char *dest, char *src)
{
    int c=0;
    int d=0;
    while (dest[c] != '\0')
    {
        c++;
    }
    while (dest[d] != '\0')
    {
        dest[c] = src[d];
        c++;
        d++;
    }
    dest[c] = '\0';
    return(dest); 
}

