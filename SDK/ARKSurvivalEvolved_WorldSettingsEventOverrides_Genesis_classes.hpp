#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Genesis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_Genesis.WorldSettingsEventOverrides_Genesis_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_Genesis_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_Genesis.WorldSettingsEventOverrides_Genesis_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_Genesis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
