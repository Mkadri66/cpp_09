/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 08:59:34 by mkadri            #+#    #+#             */
/*   Updated: 2025/02/03 15:05:25 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

# include <iostream>
# include <stack>
# include <sstream>
# include <string>

class RPN {
	
	public:

	std::stack<int>	_stack;

	RPN();
	RPN(RPN const& copy);
	~RPN();

	RPN&	operator=(RPN const& rhs);
	const std::stack<int>&	getStack() const;

};