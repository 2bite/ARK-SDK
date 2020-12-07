#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Note_Blueprint_MatineeTest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C
// 0x0000 (0x0468 - 0x0468)
class ANote_Blueprint_MatineeTest_C : public ANote
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Note_Blueprint_MatineeTest.Note_Blueprint_MatineeTest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Note_Blueprint_MatineeTest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
