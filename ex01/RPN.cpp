/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 08:59:57 by mkadri            #+#    #+#             */
/*   Updated: 2025/02/03 15:05:30 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN() {}
RPN::RPN(RPN const& copy) { *this=copy; }
RPN::~RPN() {}

RPN&	RPN::operator=(RPN const& rhs) {
	if (this != &rhs) {
		_stack = rhs.getStack();
	}
	return *this;
}

const std::stack<int>&	RPN::getStack() const { return _stack; }