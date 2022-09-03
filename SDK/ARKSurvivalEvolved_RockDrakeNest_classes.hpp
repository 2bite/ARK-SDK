#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrakeNest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RockDrakeNest.RockDrakeNest_C
// 0x0010 (0x0AF8 - 0x0AE8)
class ARockDrakeNest_C : public AStructureBaseBP_C
{
public:
	class UClass*                                      DroppedItemEggClass;                                      // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckForEggsInterval_MIN;                                 // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CheckForEggsInterval_MAX;                                 // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RockDrakeNest.RockDrakeNest_C");
		return ptr;
	}


	void RestartEggCheckTimer();
	void CheckForNearbyEggs();
	void BPUnstasis();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CheckForEggs();
	void ExecuteUbergraph_RockDrakeNest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
