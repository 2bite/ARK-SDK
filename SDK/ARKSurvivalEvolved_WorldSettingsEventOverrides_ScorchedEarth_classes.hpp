#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_ScorchedEarth_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_ScorchedEarth.WorldSettingsEventOverrides_ScorchedEarth_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_ScorchedEarth_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_ScorchedEarth.WorldSettingsEventOverrides_ScorchedEarth_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_ScorchedEarth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
