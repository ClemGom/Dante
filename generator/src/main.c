/*
** main.c for  in /home/romain.pillot/projects/dante/astar/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Thu Apr 27 13:46:57 2017 romain pillot
** Last update Thu May 11 13:43:52 2017 romain pillot
*/

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "dante.h"

int		main(int ac, char **args)
{
  t_buffer	*buffer;

  buffer = create_buffer(5, 5);
  memset(buffer->data, 'X', 5*5);
  printf("%s\nvs\n", buffer->data);
  display_buffer(buffer);
  return (0);
}
