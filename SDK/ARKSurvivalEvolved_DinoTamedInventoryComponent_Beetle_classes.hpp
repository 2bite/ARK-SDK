#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Beetle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C
// 0x0020 (0x0558 - 0x0538)
class UDinoTamedInventoryComponent_Beetle_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	TArray<class UClass*>                              CraftablePoo;                                             // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<double>                                     CraftingStartTimes;                                       // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Beetle.DinoTamedInventoryComponent_Beetle_C");
		return ptr;
	}


	void STATIC_CraftItem(int ItemToCraftIndex);
	void BPInventoryRefresh();
	void BPInitializeInventory();
	void CheckIfAnythingNewCanBeCrafted();
	void Initial_Set_Crafting_Times();
	void TryToCraft();
	void UnsetAll();
	void HasEnoughResources(int IndexClassToCheck, bool* hasEnough, int* NumberOfTimesCanCraft);
	void RemoveUncraftable();
	void BPNotifyItemAdded(class UPrimalItem** anItem, bool* bEquipItem);
	void BPNotifyItemRemoved(class UPrimalItem** anItem);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Beetle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
