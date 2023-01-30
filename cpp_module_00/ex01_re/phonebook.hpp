#ifndef _PHONEBOOK
#define _PHONEBOOK

#include "contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];

	public:
		void	add(const int idx);
		void	search(const int i, const int flg);
		void  displayall(const int idx);
};

#endif
