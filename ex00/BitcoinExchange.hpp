/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:14:07 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/30 17:29:22 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>
# include <map>
# include <sstream>
# include <string>
# include <fstream>
# include <stdlib.h>


class Bitcoin {

	private:

	std::map<std::string, float>	_ratesData;

	public:

	Bitcoin();
	Bitcoin(Bitcoin const& copy);
	~Bitcoin();

	Bitcoin&	operator=(Bitcoin const&);
	std::map<std::string, float> const&	getRatesData() const;

	void	extractData(std::ifstream& file);
	void	displayBtcAmount(std::ifstream& inputFile);
	void	findClosestDate(std::string& date, float& value);
};