#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_TekStrider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C
// 0x0001 (0x0591 - 0x0590)
class UDinoTamedInventoryComponent_TekStrider_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	bool                                               ret_bool;                                                 // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_TekStrider.DinoTamedInventoryComponent_TekStrider_C");
		return ptr;
	}


	bool BPPreventEquipItem(class UPrimalItem** theItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_TekStrider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
