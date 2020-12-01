#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Dragonfly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Dragonfly.DinoEntry_Dragonfly_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Dragonfly_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Dragonfly.DinoEntry_Dragonfly_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Dragonfly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
