///////////////////////////////////////////////////////////
//  TGoodStudent.h
//  Implementation of the Class TGoodStudent
//  Created on:      13-Sep-2018 11:00:09 PM
//  Original author: James
///////////////////////////////////////////////////////////

#if !defined(EA_09C52730_5529_431e_9F18_C7B7FEDBE15F__INCLUDED_)
#define EA_09C52730_5529_431e_9F18_C7B7FEDBE15F__INCLUDED_

#include "TStudent.h"

namespace System
{
	class TGoodStudent : public System::TStudent
	{

	public:
		TGoodStudent();
		virtual ~TGoodStudent();

		const void Print() const;

	};

}
#endif // !defined(EA_09C52730_5529_431e_9F18_C7B7FEDBE15F__INCLUDED_)
