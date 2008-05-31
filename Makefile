##
## Makefile for **AbstractVM** in /u/epitech_2010s/toumi_m/cu/rendu/cpp/colle2
## 
## Made by majdi toumi
## Login   <toumi_m@epitech.net>
## 
## Started on  Sat May 31 08:44:23 2008 majdi toumi
## Last update Sat May 31 10:41:14 2008 majdi toumi
##

# binary:
NAME		=	abstractVm

# sources:
SRC		=	main.cpp

# objects:
OBJ		=	$(SRC:.cpp=.o)

# includes:
INCLUDES	=	-I.

# debug:
DEBUG		=	-g

# warning & errors:
WARNINGS	+=	-ansi
WARNINGS	+=	-pedantic
WARNINGS	+=	-W
WARNINGS	+=	-Wall
WARNINGS	+=	-Werror
WARNINGS	+=	-Wunused
WARNINGS	+=	-Wparentheses
WARNINGS	+=	-Wshadow
WARNINGS	+=	-Wcast-qual
WARNINGS	+=	-Woverloaded-virtual

# compilation's flags:
CFLAGS		+=	$(INCLUDES) $(WARNINGS) $(DEBUG)

CC		=	$(CC_FREEBSD)
CC_FREEBSD	=	/usr/bin/g++
CC_LINUX	=	/usr/bin/g++
CC_SUNOS	=	/usr/sfw/bin/g++

MK		=	$(MK_FREEBSD)
MK_FREEBSD	=	/usr/bin/make
MK_LINUX	=	/usr/bin/make
MK_SUNOS	=	/usr/css/bin/make

MV		=	mv
RM		=	rm -f

all		:
			$(MK) $(NAME)

$(NAME)		:	$(OBJ)
			$(CC) -o $@ $(OBJ) $(LDFLAGS)

clean		:
			$(RM) *.o
			$(RM) *.core
			$(RM) *~

fclean		:	clean
			$(RM) $(NAME)

rclean		:	fclean
			$(RM) /#*/#

re		:	fclean all

.cpp.o		:
			$(CC) $(CFLAGS) -c $< -o $@

.PHONY		:	all clean fclean rclean re
.SUFFIXES	:	.cpp.o
