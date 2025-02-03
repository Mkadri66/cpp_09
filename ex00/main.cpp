/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkadri <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 17:09:43 by mkadri            #+#    #+#             */
/*   Updated: 2025/01/30 17:42:24 by mkadri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int ac, char** av) {

	(void)ac;
	std::ifstream	inputFile(av[1]);
	if (!inputFile.is_open()) {
		std::cerr << "Error: could not open file" << std::endl;
		return 1;
	}

	std::ifstream	file("data.csv");
	if  (!file.is_open()) {
		std::cerr << "Error opening file data.csv" << std::endl;
		return 1;
	}

	Bitcoin	btc;
	btc.extractData(file);
	btc.displayBtcAmount(inputFile);

	file.close();
	inputFile.close();
	return 0;	
}