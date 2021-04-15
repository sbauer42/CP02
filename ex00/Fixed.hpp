/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:59:09 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 10:10:06 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const Fixed&);
		~Fixed(void);
		Fixed &operator=(const Fixed&);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;

	private:

		int		_fixedValue;
		static const int	_bits = 8;

};

#endif