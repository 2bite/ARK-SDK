#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Dunkle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Dunkle.DinoTamedInventoryComponent_Dunkle_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_Dunkle_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Dunkle.DinoTamedInventoryComponent_Dunkle_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoTamedInventoryComponent_Dunkle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif