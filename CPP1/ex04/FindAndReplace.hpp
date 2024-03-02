/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FindAndReplace.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 12:47:33 by ama10362          #+#    #+#             */
/*   Updated: 2024/03/02 15:45:43 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FINDANDREPLACE_HPP
#define FINDANDREPLACE_HPP
#include <iostream>
#include <string>
#include <fstream>

class FindAndReplace
{
private:
    std::string _inputFile;
    std::string _outputFile;
    
public:
    FindAndReplace(std::string filename);
    ~FindAndReplace(void); 
    void replace(std::string toFind, std::string toReplace);  
};

#endif