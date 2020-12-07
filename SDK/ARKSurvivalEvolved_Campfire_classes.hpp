#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Campfire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Campfire.Campfire_C
// 0x0010 (0x0DE8 - 0x0DD8)
class ACampfire_C : public ABaseFuelBurner_C
{
public:
	class UPrimalInventoryBP_Campfire_C*               PrimalInventoryBP_Campfire_C1;                            // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Campfire.Campfire_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Campfire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
