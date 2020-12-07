#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_TheIsland_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_TheIsland.WorldSettingsEventOverrides_TheIsland_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_TheIsland_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_TheIsland.WorldSettingsEventOverrides_TheIsland_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_TheIsland(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
