#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_BP_Tuso_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Tuso.DinoTamedInventoryComponent_BP_Tuso_C
// 0x0040 (0x05C0 - 0x0580)
class UDinoTamedInventoryComponent_BP_Tuso_C : public UDinoTamedInventoryComponent_BP_RockGolem_C
{
public:
	TArray<double>                                     GiveItemsTimes;                                           // 0x0580(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<float>                                      GiveItemsIntervals;                                       // 0x0590(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        GiveItemsMax;                                             // 0x05A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class UClass*>                              GiveItemsClass;                                           // 0x05B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_BP_Tuso.DinoTamedInventoryComponent_BP_Tuso_C");
		return ptr;
	}


	void BPInventoryRefresh();
	void ExecuteUbergraph_DinoTamedInventoryComponent_BP_Tuso(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
