#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_IndustrialForge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IndustrialForge.IndustrialForge_C
// 0x0010 (0x0E20 - 0x0E10)
class AIndustrialForge_C : public ABaseFuelBurner_GasOnly_C
{
public:
	class UPrimalInventoryBP_IndustrialForge_C*        PrimalInventoryBP_IndustrialForge_C1;                     // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IndustrialForge.IndustrialForge_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_IndustrialForge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
