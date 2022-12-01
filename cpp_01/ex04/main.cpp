/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:12:54 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/01 09:13:47 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

/*
	This program takes a file as an argument and replaces all instances of a
	string with another string. The program will create a new file with the
	replaced string and the original file will be left untouched.
	
	Reminder: we are not allowed to use std::string::replace().

	Usage: ./replace [filename] [string to replace] [string to replace with]
*/

/*
	fstream is a library that allows us to read and write to files.
	its provide for us  3 classes:
		1- ifstream: This data type represents the input file stream and is 
		used to read the files.
		2- ofstream: This data type represents the output file stream and is used 
		to create files and to write information to files.
		3- fstream: This data type represents the file stream generally,
		and has the capabilities of both ofstream and ifstream which means
		it can create files, write information to files, and read information from files.
*/

/*
	We can use the getline() function to read the file line by line.
	We can use the find() function to find the string to replace.
	We can use the replace() function to replace the string to replace with the string to replace with.
	We can use the append() function to append the string to the new file.
*/

/*
	some alternatives to replace():
		1- use the find() function to find the string to replace and then use the erase() function to erase the string to replace.
		2- use the find() function to find the string to replace and then use the insert() function to insert the string to replace with.
*/

int main( int ac, char **av ) {
	if ( ac != 4 ) {
		std::cout << "Usage: ./replace [filename] [s1] [s2]" << std::endl;
		return (1);
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::ifstream ifs(filename.c_str());
	if (!ifs) {
		std::cout << "Error: File does not exist" << std::endl;
		return (1);
	}
	std::stringstream buffer;
	buffer << ifs.rdbuf();
	std::string content = buffer.str();
	unsigned long index = content.find(s1);
	if ( index != std::string::npos) {
		content.erase(index, s1.length());
		content.insert(index, s2);
		while ( index != std::string::npos) {
			index = content.find(s1, index + s2.length());
			if ( index != std::string::npos) {
				content.erase(index, s1.length());
				content.insert(index, s2);
			}
		}
	}
	else {
		std::cout << "Error: String to replace does not exist" << std::endl;
		ifs.close();
		return (1);
	}
	std::ofstream ofs((filename + ".replace").c_str());
	ofs << content;
	ifs.close();
	ofs.close();
	return (0);
}