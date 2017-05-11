/*
** main.c for  in /home/romain.pillot/projects/dante/astar/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Thu Apr 27 13:46:57 2017 romain pillot
** Last update Thu May 11 13:59:55 2017 romain pillot
*/

#include <stdio.h>
#include <unistd.h>
#include "dante.h"

int		main(int ac, char **args)
{
  t_buffer	*buffer;

  buffer = create_buffer(5, 5, 'X');
  display_buffer(buffer);
  return (0);
}
