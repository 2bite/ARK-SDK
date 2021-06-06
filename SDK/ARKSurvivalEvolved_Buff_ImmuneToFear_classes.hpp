#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToFear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ImmuneToFear.Buff_ImmuneToFear_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_ImmuneToFear_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ImmuneToFear.Buff_ImmuneToFear_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ImmuneToFear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
