#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Honey_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C
// 0x0008 (0x09B8 - 0x09B0)
class UPrimalItemConsumable_Honey_C : public UPrimalItemConsumableEatable_C
{
public:
	class UClass*                                      WasThrownBuffToAdd;                                       // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_Honey.PrimalItemConsumable_Honey_C");
		return ptr;
	}


	void BPNotifyDropped(class APrimalCharacter** FromCharacter, bool* bWasThrown);
	void ExecuteUbergraph_PrimalItemConsumable_Honey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
