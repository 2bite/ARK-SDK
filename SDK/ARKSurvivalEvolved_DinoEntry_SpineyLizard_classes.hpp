#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_SpineyLizard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_SpineyLizard.DinoEntry_SpineyLizard_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_SpineyLizard_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_SpineyLizard.DinoEntry_SpineyLizard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_SpineyLizard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
