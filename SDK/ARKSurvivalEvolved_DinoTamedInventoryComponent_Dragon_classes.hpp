#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Dragon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Dragon.DinoTamedInventoryComponent_Dragon_C
// 0x0000 (0x0590 - 0x0590)
class UDinoTamedInventoryComponent_Dragon_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Dragon.DinoTamedInventoryComponent_Dragon_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Dragon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
