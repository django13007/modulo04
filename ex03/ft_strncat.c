#include<stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
int c=0;
int d=0;
while (dest[c] !='\0' )
{
    c++;
}
while (src[d] != '\0' && d<n)
{
    dest[c]=src[d];

    c++;
    d++;
}

dest[d]='\0';
return(dest);

}
int main(){
    char ori[]="programacion";
    char des[]="en c";
    unsigned  n=10;
    ft_strncpy(des,ori,n);
    printf("%s",des);
    return(0);
}