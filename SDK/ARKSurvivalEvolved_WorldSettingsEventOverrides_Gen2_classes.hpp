#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WorldSettingsEventOverrides_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WorldSettingsEventOverrides_Gen2.WorldSettingsEventOverrides_Gen2_C
// 0x0000 (0x0088 - 0x0088)
class UWorldSettingsEventOverrides_Gen2_C : public UPrimalWorldSettingsEventOverrides
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WorldSettingsEventOverrides_Gen2.WorldSettingsEventOverrides_Gen2_C");
		return ptr;
	}


	void ExecuteUbergraph_WorldSettingsEventOverrides_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
