#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Extinction_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_Extinction.WorldSettingsEventOverrides_Extinction_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_Extinction_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_Extinction.WorldSettingsEventOverrides_Extinction_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_Extinction(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
