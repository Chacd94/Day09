# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    where_am_i.sh                                      :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cdupuis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/16 14:40:20 by cdupuis           #+#    #+#              #
#    Updated: 2018/02/16 14:56:29 by cdupuis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

if [ifconfig | grep "inet " | cut -d " " -f2 | grep "a" -q $1]
then
	echo "hello"
else 
	ifconfig | grep "inet " | cut -d " " -f2
fi

