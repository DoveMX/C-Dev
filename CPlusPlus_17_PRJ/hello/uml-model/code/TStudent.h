///////////////////////////////////////////////////////////
//  TStudent.h
//  Implementation of the Class TStudent
//  Created on:      13-Sep-2018 2:01:46 AM
//  Original author: James
///////////////////////////////////////////////////////////

#if !defined(EA_3CA52875_16FD_48c8_9A9C_B6685F9BE72B__INCLUDED_)
#define EA_3CA52875_16FD_48c8_9A9C_B6685F9BE72B__INCLUDED_

#include "TPerson.h"

namespace System
{
	class TStudent : public System::TPerson
	{

	public:
		TStudent();
		virtual ~TStudent();
        const void Print() const;

	};

}
#endif // !defined(EA_3CA52875_16FD_48c8_9A9C_B6685F9BE72B__INCLUDED_)
