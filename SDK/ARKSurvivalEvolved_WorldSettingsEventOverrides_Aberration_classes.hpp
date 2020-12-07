#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Aberration_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_Aberration.WorldSettingsEventOverrides_Aberration_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_Aberration_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_Aberration.WorldSettingsEventOverrides_Aberration_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_Aberration(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
