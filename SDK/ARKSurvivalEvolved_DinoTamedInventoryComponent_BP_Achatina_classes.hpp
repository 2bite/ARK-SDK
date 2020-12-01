#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_BP_Achatina_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Achatina.DinoTamedInventoryComponent_BP_Achatina_C
// 0x0040 (0x0578 - 0x0538)
class UDinoTamedInventoryComponent_BP_Achatina_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	TArray<double>                                     GiveItemsTimes;                                           // 0x0538(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<float>                                      GiveItemsIntervals;                                       // 0x0548(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        GiveItemsMax;                                             // 0x0558(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              GiveItemsClass;                                           // 0x0568(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Achatina.DinoTamedInventoryComponent_BP_Achatina_C");
		return ptr;
	}


	void BPInventoryRefresh();
	void ExecuteUbergraph_DinoTamedInventoryComponent_BP_Achatina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
