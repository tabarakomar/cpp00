/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   megaphone.cpp                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: talshoub <talshoub@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/06/28 15:08:03 by talshoub         #+#    #+#              */
/*   Updated: 2026/06/28 15:29:44 by talshoub        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int i=1;
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	else
	{
		while(argv[i])
		{
			int j=0;
			while(argv[i][j])
			{
				if(std::isalnum(argv[i][j]))
				{
					char temp=std::toupper(argv[i][j]);
					std::cout << temp;
				}
				j++;
			}
			if(argv[i+1])
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
}
