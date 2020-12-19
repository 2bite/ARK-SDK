#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Deathworm_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Deathworm.DinoEntry_Deathworm_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Deathworm_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Deathworm.DinoEntry_Deathworm_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Deathworm(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
