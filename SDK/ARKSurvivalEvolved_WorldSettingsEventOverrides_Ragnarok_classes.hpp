#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Ragnarok_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_Ragnarok.WorldSettingsEventOverrides_Ragnarok_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_Ragnarok_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_Ragnarok.WorldSettingsEventOverrides_Ragnarok_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_Ragnarok(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
