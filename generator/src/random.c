/*
** random.c for  in /home/romain.pillot/projects/dante/generator/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Thu May 11 12:44:48 2017 romain pillot
** Last update Thu May 11 12:46:21 2017 romain pillot
*/

#include <stdlib.h>
#include <time.h>

int	randomize(int max)
{
  srand(time(NULL));
  return (random() % max);
}
