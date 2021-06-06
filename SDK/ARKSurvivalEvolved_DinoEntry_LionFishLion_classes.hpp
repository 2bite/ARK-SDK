#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_LionFishLion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_LionFishLion.DinoEntry_LionFishLion_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_LionFishLion_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_LionFishLion.DinoEntry_LionFishLion_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_LionFishLion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
