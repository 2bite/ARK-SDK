#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WallTorch_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WallTorch.WallTorch_C
// 0x0010 (0x0E20 - 0x0E10)
class AWallTorch_C : public ABaseFuelBurner_C
{
public:
	class UPrimalInventoryBP_StandingTorch_C*          PrimalInventoryBP_StandingTorch_C1_1;                     // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WallTorch.WallTorch_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WallTorch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
