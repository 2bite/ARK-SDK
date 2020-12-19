#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AirConditioner_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AirConditioner.AirConditioner_C
// 0x0010 (0x0DE8 - 0x0DD8)
class AAirConditioner_C : public AStructureItemContainerBaseBP_C
{
public:
	class UPrimalInventoryBP_AC_Base_C*                PrimalInventoryBP_AC_Base_C1;                             // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AirConditioner.AirConditioner_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AirConditioner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
