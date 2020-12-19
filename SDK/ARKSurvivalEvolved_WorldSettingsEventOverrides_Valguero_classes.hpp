#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Valguero_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_Valguero.WorldSettingsEventOverrides_Valguero_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_Valguero_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_Valguero.WorldSettingsEventOverrides_Valguero_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_Valguero(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
