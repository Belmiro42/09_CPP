/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmatos-d <bmatos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:33:21 by bmatos-d          #+#    #+#             */
/*   Updated: 2024/09/10 18:37:54 by bmatos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>

std::string replace(std::string read_line, std::string to_find, std::string replace)
{
	std::string	working_buffer;
	size_t		index;

	index = 0;
	while (read_line.find(to_find))
	{
		if (index < read_line.size())
		{
			working_buffer.append(read_line.substr(index, read_line.find(to_find) - index));
			working_buffer.append(replace);
		}
		index += read_line.find(to_find);
	}
	if (index < read_line.size())
		working_buffer.append(read_line.substr(index, read_line.size() - index));
	return working_buffer;
}

int main(int argc, char **argv)
{
	std::string infile_name;
	std::string outfile_name;
	std::string	read_line;
	std::string working_buffer;

	if (argc != 4)
		return (1);
	infile_name = argv[1];
	outfile_name = infile_name + ".replace";

	std::ifstream infile(infile_name);
	std::ofstream outfile(outfile_name);

	while (std::getline(infile, read_line))
	{
		working_buffer = replace(read_line, argv[2], argv[3]);
		outfile << working_buffer;
		read_line.clear();
		working_buffer.clear();
	}
	return (0);
}