//////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXV
//////////////////////////////////////////////////////////////////////////////

#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

class Student
{
	public:
		Student();
		Student(unsigned int matNr, std::string name, std::string geburtstag, std::string address);

		unsigned int getMatNr() const;
		std::string getName() const;
		std::string getGeburtstag() const;
		std::string getAdresse() const;

		void ausgabe() const;

		void ausgabe(std::ostream& stream) const;

		bool operator<(const Student& other) const;
		bool operator>(const Student& other) const;
		bool operator==(const Student& other);

	private:
		unsigned int matNr;
		std::string name;
		std::string geburtstag;
		std::string adresse;
};

std::ostream& operator<< (std::ostream& stream, Student& student);

#endif
