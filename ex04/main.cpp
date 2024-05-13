/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yugao <yugao@student.42madrid.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 00:08:38 by yugao             #+#    #+#             */
/*   Updated: 2024/05/13 00:08:39 by yugao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string get_main_filename(const std::string &filename){

    size_t  lastdot = filename.find_last_of('.');
    
    if (lastdot == std::string::npos)
        return filename;
    return filename.substr(0, lastdot);
}

int main(int argc, char **argv){

	if (argc != 4){
        std::cout << "Wrong number of those arguments!!!\n"
				  << "Tips: You have to introduce three arguments\n"
				  << "\t1.Filename(with full firection!!!).\n"
				  << "\t2.String waiting to be replaced.\n"
				  << "\t3.String used to replace.\n";	 
        return 1;
    } 
	std::string filename = argv[1];
	std::string s1 		 = argv[2];
	std::string s2		 = argv[3];

    std::ifstream infile(filename.c_str());
    if (!infile.is_open()){

        std::cerr << "File no exist!!\n";
        return 1;
    } 
    std::string outfilename = get_main_filename (filename) + ".replace";
    std::ofstream outfile(outfilename.c_str());
    if (!outfile.is_open()){

        std::cerr << "Error when try to creat new document!!\n";
        return 1;
    }
    std::string newline;
    while (std::getline (infile, newline)){

        if (newline.find (s1) == std::string::npos)
            outfile << newline << "\n";
        else{
            
            size_t  pos = 0;
            while ((pos = newline.find(s1)) != std::string::npos){

                newline.erase (pos, s1.length());
                newline.insert (pos, s2);
                pos += s2.length ();
            }
            outfile << newline << "\n";
        }
    }
    infile.close();
    outfile.close();
    //system ("leaks -q Loser");
	return 0;
}
