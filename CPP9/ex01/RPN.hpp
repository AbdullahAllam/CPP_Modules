/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:20:46 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/10 21:29:57 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <string>
#include <stack>
#include <stdexcept>

class RPN {
public:
    RPN();
    RPN(RPN const &other);
    RPN &operator=(RPN const &other);
    ~RPN();

    int evaluate(const std::string& expression);

private:
    bool isOperator(char c);
    int performOperation(char operation, int operand1, int operand2);

    std::stack<int> stack;
};

#endif

