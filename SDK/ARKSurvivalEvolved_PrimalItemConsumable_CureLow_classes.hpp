#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_CureLow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C
// 0x0008 (0x0998 - 0x0990)
class UPrimalItemConsumable_CureLow_C : public UPrimalItemConsumableGeneric_C
{
public:
	class UPrimalItem*                                 SelfObj;                                                  // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemConsumable_CureLow.PrimalItemConsumable_CureLow_C");
		return ptr;
	}


	void BlueprintUsed();
	void ExecuteUbergraph_PrimalItemConsumable_CureLow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif