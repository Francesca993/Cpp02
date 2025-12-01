/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesca <francesca@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 10:17:52 by francesca         #+#    #+#             */
/*   Updated: 2025/12/01 10:38:29 by francesca        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

//–––––––––––––––––––––––––––––
// Colors for Output
// –––––––––––––––––––––––––––––
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define RED "\033[31m"
# define RESET "\033[0m"
# define BLUE "\033[0;34m"


#include <iostream>


class Fixed{
    private:
    int _rawBits;
    static const int _fractionalBits;

    public:
    Fixed();                          // default
    Fixed(const Fixed& other);      // copy ctor
    Fixed& operator=(const Fixed& other); // copy assign
    ~Fixed();
    int getRawBits( void ) const; // returns the raw value of the fixed-point value.
    void setRawBits( int const raw ); // sets the raw value of the fixed-point number.
};

#endif