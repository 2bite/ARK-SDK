#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_MoleRat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C
// 0x0000 (0x0570 - 0x0570)
class UDinoTamedInventoryComponent_MoleRat_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_MoleRat.DinoTamedInventoryComponent_MoleRat_C");
		return ptr;
	}


	float BPOverrideItemMinimumUseInterval(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_MoleRat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
