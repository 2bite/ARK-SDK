#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoTamedInventoryComponent_Tropeognathus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C
// 0x0008 (0x0578 - 0x0570)
class UDinoTamedInventoryComponent_Tropeognathus_C : public UDinoTamedInventoryComponent_BP_Base_C
{
public:
	class UClass*                                      TropeFuel;                                                // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoTamedInventoryComponent_Tropeognathus.DinoTamedInventoryComponent_Tropeognathus_C");
		return ptr;
	}


	bool BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC);
	bool CanGrindItems(class AShooterPlayerController** PC);
	bool CanGrindItem(class UPrimalItem** Item);
	void ExecuteUbergraph_DinoTamedInventoryComponent_Tropeognathus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
