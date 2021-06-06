#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IndustrialCookingPot_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndustrialCookingPot.IndustrialCookingPot_C
// 0x0010 (0x0F40 - 0x0F30)
class AIndustrialCookingPot_C : public AWaterTankBaseBP_NoInv_C
{
public:
	class UPrimalInventoryBP_CookingPot_Industrial_C*  PrimalInventoryBP_CookingPot_Industrial_C1;               // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndustrialCookingPot.IndustrialCookingPot_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_IndustrialCookingPot(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
