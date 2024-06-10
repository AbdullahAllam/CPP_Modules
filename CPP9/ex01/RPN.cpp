/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ama10362 <ama10362@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:20:43 by ama10362          #+#    #+#             */
/*   Updated: 2024/06/10 21:42:56 by ama10362         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(RPN const &other) {
    this->stack = other.stack;
}

RPN &RPN::operator=(RPN const &other) {
    if (this != &other) {
        this->stack = other.stack;
    }
    return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int RPN::performOperation(char operation, int operand1, int operand2) {
    switch (operation) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': 
            if (operand2 == 0) {
                throw std::runtime_error("Division by zero");
            }
            return operand1 / operand2;
        default: 
            throw std::runtime_error("Invalid operator");
    }
}

int RPN::evaluate(const std::string& expression) {
    while (!stack.empty()) {
        stack.pop();
    }

    for (std::string::const_iterator it = expression.begin(); it != expression.end(); ++it) {
        if (isdigit(*it)) {
            stack.push(*it - '0');
        } else if (isOperator(*it)) {
            if (stack.size() < 2) {
                throw std::runtime_error("Invalid expression");
            }
            int operand2 = stack.top(); stack.pop();
            int operand1 = stack.top(); stack.pop();
            int result = performOperation(*it, operand1, operand2);
            stack.push(result);
        } else if (!isspace(*it)) {
            throw std::runtime_error("Invalid character in expression");
        }
    }
    if (stack.size() != 1) {
        throw std::runtime_error("Invalid expression");
    }
    return stack.top();
}
