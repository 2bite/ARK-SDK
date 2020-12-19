#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_LanternPetLizard_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_LanternPetLizard.DinoEntry_LanternPetLizard_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_LanternPetLizard_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_LanternPetLizard.DinoEntry_LanternPetLizard_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_LanternPetLizard(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
