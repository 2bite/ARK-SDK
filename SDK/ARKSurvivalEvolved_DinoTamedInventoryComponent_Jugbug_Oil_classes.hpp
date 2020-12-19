#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Jugbug_Oil_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C
// 0x0001 (0x0571 - 0x0570)
class UDinoTamedInventoryComponent_Jugbug_Oil_C : public UDinoDropInventoryComponent_BP_Base_C
{
public:
	bool                                               bWasAddedItems;                                           // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Jugbug_Oil.DinoTamedInventoryComponent_Jugbug_Oil_C");
		return ptr;
	}


	void BPInventoryRefresh();
	void ExecuteUbergraph_DinoTamedInventoryComponent_Jugbug_Oil(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
