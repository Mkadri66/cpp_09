/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:14:37 by mkadri            #+#    #+#             */
/*   Updated: 2025/02/05 17:16:56 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <sstream>
# include <list>
# include <vector>
# include <algorithm>
# include <time.h>
# include <typeinfo>

class PmergeMe {

	private:

	std::list<int>		_list;
	std::vector<int>	_vector;

	public:

	PmergeMe();
	PmergeMe(PmergeMe const& copy);
	~PmergeMe();

	PmergeMe&				operator=(PmergeMe const& rhs);
	std::list<int> const&	getList() const;
	std::vector<int> const&	getVector() const;

	void	runSorting(int ac, char** av);
	void	extractNumbers(int ac, char **av);
};

int	ft_atoi(const std::string& str);