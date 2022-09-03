#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Archa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Archa.DinoTamedInventoryComponent_Archa_C
// 0x0000 (0x05A0 - 0x05A0)
class UDinoTamedInventoryComponent_Archa_C : public UDinoTamedInventoryComponent_BP_RockGolem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Archa.DinoTamedInventoryComponent_Archa_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Archa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
