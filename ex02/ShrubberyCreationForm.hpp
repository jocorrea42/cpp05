/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:34:46 by jocorrea          #+#    #+#             */
/*   Updated: 2024/03/30 15:45:19 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include "Form.hpp"

#define TREE "          &&& &&  & &&\n      && &\\/&\\|& ()|/ @, &&\n      &\\/(/&/&||/& /_/)_&/_&\n   &() &\\/&|()|/&\\/ '%\" & ()\n  &_\\_&&_\\ |& |&&/&__%_/_& &&\n&&   && & &| &| /& & % ()& /&&\n ()&_---()&\\&\\|&&-&&--%---()~\n     &&     \\|||\n             |||\n             |||\n             |||\n       , -=-~  .-^- _\n"

class Bureaucrat;

class ShrubberyCreationForm: public Form
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm const	&operator=(ShrubberyCreationForm const &copy);
		void	beExecuted(Bureaucrat const &bureaucrat) const;
};
std::ostream	&operator<<(std::ostream &str, ShrubberyCreationForm const &form);
