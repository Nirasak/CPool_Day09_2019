/*
** EPITECH PROJECT, 2019
** my_params_to_array.c
** File description:
** params to array
*/

#include <stddef.h>
#include <stdlib.h>
#include "my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    int i = 0;
    struct info_param *ip = malloc(sizeof(struct info_param) * (ac + 1));

    for (i = 0; i < ac; i++) {
        ip[i].length = my_strlen(av[i]);
        ip[i].str = av[i];
        ip[i].copy = my_strdup(av[i]);
        ip[i].word_array = my_str_to_word_array(av[i]);
    }
    ip[i].length = 0;
    ip[i].str = NULL;
    ip[i].copy = NULL;
    ip[i].word_array = NULL;
    return (ip);
}
