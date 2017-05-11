/*
** dante.h for  in /home/romain.pillot/projects/dante/astar/inc
** 
** Made by romain pillot
** Login   <romain.pillot@epitech.net>
** 
** Started on  Thu Apr 27 13:47:35 2017 romain pillot
** Last update Thu May 11 13:36:18 2017 romain pillot
*/

#ifndef DANTE_H_
# define DANTE_H_

typedef struct	s_buffer
{
  unsigned char	*data;
  int		width;
  int		height;
}		t_buffer;

t_buffer	*create_buffer(int width, int height);

void		display_buffer(t_buffer *buffer);

char		get_char(t_buffer *buffer, int x, int y);

void		set_char(t_buffer *buffer, int x, int y, char c);

int		randomize(int max);

#endif /* !DANTE_H_ */
