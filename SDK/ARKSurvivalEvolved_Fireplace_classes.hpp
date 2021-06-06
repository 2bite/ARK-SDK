#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fireplace_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Fireplace.Fireplace_C
// 0x0018 (0x0E28 - 0x0E10)
class AFireplace_C : public ABaseFuelBurner_C
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_Campfire_C*               PrimalInventoryBP_Campfire_C1;                            // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fireplace.Fireplace_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Fireplace(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
