/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocorrea <jocorrea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 14:56:59 by jocorrea          #+#    #+#             */
/*   Updated: 2024/03/30 16:15:03 by jocorrea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_isSigned;
		int const			_signGrade;
		int const			_execGrade;
	public:
		Form(void);
		Form(std::string const &name, int const &signGrade, int const &execGrade);
		Form(std::string const &type, std::string const &target);
		Form(Form const &copy);
		virtual ~Form(void);
		Form const	&operator=(Form const &copy);
		std::string const	&getName(void) const;
		bool const			&getIsSigned(void) const;
		int const			&getSignGrade(void) const;
		int const			&getExecGrade(void) const;
		virtual std::string const	&getTarget(void) const = 0;
		void				beSigned(Bureaucrat &bureaucrat);
		void				execute(Bureaucrat const &executor) const;
		virtual void		beExecuted(Bureaucrat const &bureaucrat) const = 0;
		static Form			*makeForm(std::string const &type, std::string const &target);
		class GradeTooHighException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
		class FormNotSignedException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};

		class InvalidFormException: public std::exception
		{
			public:
				virtual char const	*what(void) const throw();
		};
};
std::ostream	&operator<<(std::ostream &str, Form const &form);
