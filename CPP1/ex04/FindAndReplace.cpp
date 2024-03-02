/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindAndReplace.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:47:36 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/02 15:45:54 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FindAndReplace.hpp"

FindAndReplace::FindAndReplace(std::string filename)
{
    this->_inputFile = filename;
    this->_outputFile = this->_inputFile + ".replace";
}

FindAndReplace::~FindAndReplace(void){}

void FindAndReplace::replace(std::string toFind, std::string toReplace)
{
    std::ifstream   myinput(this->_inputFile.c_str());
    if (myinput.is_open())
    {
        std::string fileContent;
        if (std::getline(myinput, fileContent, '\0'))
        {
            std::ofstream myoutput(this->_outputFile.c_str());
            size_t position = fileContent.find(toFind);
            while (position != std::string::npos)
            {
                fileContent.erase(position, toFind.length());
                fileContent.insert(position, toReplace);
                position = fileContent.find(toFind);
            }
            myoutput<<fileContent;
            myoutput.close();
        }
        else{
            std::cout << "The input file is empty" << std::endl;
        }
        myinput.close();
    }
    else
    {
        std::cout << "Cannt open the input file" << std::endl;    
    }
} 

