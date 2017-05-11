##
## Makefile for  in /home/romain.pillot/projects/dante
## 
## Made by romain pillot
## Login   <romain.pillot@epitech.net>
## 
## Started on  Thu Apr 27 13:42:18 2017 romain pillot
## Last update Thu Apr 27 13:52:33 2017 romain pillot
##

all 	:
		make -C astar/
		make -C breadth/
		make -C depth/
		make -C generator/
		make -C tournament/

clean	:
		make clean -C astar/
		make clean -C breadth/
		make clean -C depth/
		make clean -C generator/
		make clean -C tournament/

fclean	:
		make fclean -C astar/
		make fclean -C breadth/
		make fclean -C depth/
		make fclean -C generator/
		make fclean -C tournament/

re	:	fclean all

.PHONY: all clean fclean re
