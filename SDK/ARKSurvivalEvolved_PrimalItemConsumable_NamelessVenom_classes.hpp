#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_NamelessVenom_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_NamelessVenom.PrimalItemConsumable_NamelessVenom_C
// 0x0008 (0x0A08 - 0x0A00)
class UPrimalItemConsumable_NamelessVenom_C : public UPrimalItemConsumableEatable_NoIceBox_C
{
public:
	class UPrimalItem*                                 SelfObj;                                                  // 0x0A00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_NamelessVenom.PrimalItemConsumable_NamelessVenom_C");
		return ptr;
	}


	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_NamelessVenom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
