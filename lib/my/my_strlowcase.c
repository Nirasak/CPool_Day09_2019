/*
** EPITECH PROJECT, 2019
** my_strlowcase.c
** File description:
** str low case
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    return (str);
}
