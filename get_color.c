/*
** EPITECH PROJECT, 2019
** get_color.c
** File description:
** get color
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int r = red;
    int g = green;
    int b = blue;

    r = r << 16;
    g = g << 8;
    return (r + g + b);
}
