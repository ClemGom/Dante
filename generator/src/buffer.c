/*
** buffer.c for  in /home/romain.pillot/projects/dante/generator/src
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Thu May 11 13:19:09 2017 romain pillot
** Last update Thu May 11 13:48:52 2017 romain pillot
*/

#include <stdlib.h>
#include <stdio.h>
#include "dante.h"

t_buffer	*create_buffer(int width, int height)
{
  t_buffer	*buffer;

  buffer = malloc(sizeof(t_buffer));
  buffer->data = malloc(sizeof(char) * width * height);
  buffer->width = width;
  buffer->height = height;
  return (buffer);
}

void	display_buffer(t_buffer *buffer)
{
  int	len;
  int	i;

  len = buffer->width * buffer->height;
  i = -1;
  while (++i < len)
    {
      printf("%c", buffer->data[i]);
      if (!((i + 1) % buffer->width))
	printf("%c", '\n');
    }
}

char	get_char(t_buffer *buffer, int x, int y)
{
  return (buffer->data[buffer->width * (y - 1) + x]);
}

void	set_char(t_buffer *buffer, int x, int y, char c)
{
  buffer->data[buffer->width * (y - 1) + x] = c;
}
