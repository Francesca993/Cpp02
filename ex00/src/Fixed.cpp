/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:18:01 by francesca         #+#    #+#             */
/*   Updated: 2025/12/01 10:54:47 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

const int Fixed::_fractionalBits = 8;

// default
Fixed::Fixed(): _rawBits(0){
    std::cout << GREEN << "Default constructor called\n" << RESET << std::endl;
}

Fixed::~Fixed() {
    std::cout << RED << "Destructor called\n" << RESET << std::endl;
}

// copy ctor
Fixed::Fixed(const Fixed& other) : _rawBits(other._rawBits) {
    std::cout << YELLOW << "Copy constructor called\n" << RESET << std::endl;
}

// copy assign
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << BLUE << "Copy assignment operator called\n" << RESET << std::endl;
    if (this != &other) {
        this->_rawBits = other._rawBits;
    }
    return *this;
}

// returns the raw value of the fixed-point value.
int Fixed::getRawBits( void ) const{
    std::cout << YELLOW << "getRawBits member function called" << RESET << std::endl;
    return(this->_rawBits);
}

// sets the raw value of the fixed-point number.
void Fixed::setRawBits( int const raw ){
    this->_rawBits = raw;
}
