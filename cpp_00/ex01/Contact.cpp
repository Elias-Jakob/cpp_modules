# include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string fN, std::string lN, std::string n,
		std::string pN, std::string dS) :
	firstName(fN), lastName(lN), nickname(n),
	phoneNumber(pN), darkestSecret(dS) {}
