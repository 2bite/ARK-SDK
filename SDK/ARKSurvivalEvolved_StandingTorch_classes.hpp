#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StandingTorch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandingTorch.StandingTorch_C
// 0x0010 (0x0DC8 - 0x0DB8)
class AStandingTorch_C : public ABaseFuelBurner_C
{
public:
	class UPrimalInventoryBP_StandingTorch_C*          PrimalInventoryBP_StandingTorch_C1_1;                     // 0x0DB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandingTorch.StandingTorch_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StandingTorch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
