#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Piranha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Piranha.DinoEntry_Piranha_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Piranha_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Piranha.DinoEntry_Piranha_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Piranha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
