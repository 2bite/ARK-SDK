#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Mantis_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C
// 0x0010 (0x0548 - 0x0538)
class UDinoTamedInventoryComponent_Mantis_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	TArray<class UClass*>                              PreventEquipItemClasses;                                  // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Mantis.DinoTamedInventoryComponent_Mantis_C");
		return ptr;
	}


	bool BPPreventEquipItem(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Mantis(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
