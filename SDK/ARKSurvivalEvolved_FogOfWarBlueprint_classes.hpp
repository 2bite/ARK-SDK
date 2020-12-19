#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FogOfWarBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FogOfWarBlueprint.FogOfWarBlueprint_C
// 0x0000 (0x00C8 - 0x00C8)
class UFogOfWarBlueprint_C : public UFogOfWar
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FogOfWarBlueprint.FogOfWarBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_FogOfWarBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
