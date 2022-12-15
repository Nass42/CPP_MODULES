/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namohamm <namohamm@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 22:45:27 by namohamm          #+#    #+#             */
/*   Updated: 2022/12/15 22:50:06 by namohamm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPER_HPP
# define HELPER_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void);
void identify(Base * p);
void identify(Base & p);

#endif