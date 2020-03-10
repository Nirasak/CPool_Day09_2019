/*
** EPITECH PROJECT, 2019
** 
** File description:
** 
*/

#include "my.h"

int main(int ac, char **av)
{
    struct info_param *ip = my_params_to_array(ac, av);
    my_show_param_array(ip);
}
