///////////////////////////////////////////////////////////
//  TPerson.h
//  Implementation of the Class TPerson
//  Created on:      13-Sep-2018 2:01:44 AM
//  Original author: James
///////////////////////////////////////////////////////////

#if !defined(EA_211743D2_E00A_41b6_93F7_F527BF4AFD91__INCLUDED_)
#define EA_211743D2_E00A_41b6_93F7_F527BF4AFD91__INCLUDED_

#include <string>

namespace System
{
	class TPerson
	{

	public:
		TPerson(const char name[], unsigned long id);
		virtual ~TPerson();
		std::string GetName();
		virtual const void Print() const;

    private:
	    TPerson(const TPerson& other);
	    TPerson operator=(const TPerson& other);

	private:
		std::string _name;
		unsigned long _id;

	};

}
#endif // !defined(EA_211743D2_E00A_41b6_93F7_F527BF4AFD91__INCLUDED_)
