#include <stdio.h>
int ft_strcmp(char *s1, char *s2)
{
    int c=0;
    while (s1[c]==s2[c] && s1[c != '\0'] && s2[c] != '\0')
    {
        c++;
    }
return(s1[c] - s2[c]);
}
int main(){
    char cad[]="programacion";
    char cad2[]="programacion";
    ft_strcmp(cad,cad2);
    printf("%i",ft_strcmp(cad,cad2));
    return 0;
}