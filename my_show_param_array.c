/*
** EPITECH PROJECT, 2019
** my_show_param_array.c
** File description:
** show param array
*/

#include <stddef.h>
#include "my.h"

int my_show_param_array(struct info_param const *par)
{
    for (int j = 0; par[j].str != NULL; j++) {
        my_putstr(par[j].str);
        my_putchar('\n');
        my_put_nbr(par[j].length);
        my_putchar('\n');
        for (int i = 0; par[j].word_array[i] != NULL; i++) {
            my_putstr(par[j].word_array[i]);
            my_putchar('\n');
        }
    }
    return (0);
}
