#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_OilPump_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OilPump.OilPump_C
// 0x0028 (0x0E38 - 0x0E10)
class AOilPump_C : public AStructureItemContainerBaseBP_C
{
public:
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Pump_SFX;                                                 // 0x0E20(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0E28(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UPrimalInventoryBP_oilPump_C*                PrimalInventoryBP_oilPump_C1;                             // 0x0E30(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OilPump.OilPump_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_OilPump(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
