#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WindTrubine_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WindTrubine.WindTrubine_C
// 0x0020 (0x0E30 - 0x0E10)
class AWindTrubine_C : public AStructureItemContainerBaseBP_C
{
public:
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0E10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0E18(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOffForWindLessThan;                                   // 0x0E20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPowerDistance;                                         // 0x0E24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWind;                                              // 0x0E28(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0E2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WindTrubine.WindTrubine_C");
		return ptr;
	}


	class FString BPOverrideCantBuildReasonString(int* CantBuildReason);
	int BPIsAllowedToBuild(int* CurrentAllowedReason, struct FPlacementData* OutPlacementData);
	void BPUnstasis();
	void UpdateWind();
	bool BPIsValidWaterSourceForPipe(class APrimalStructureWaterPipe** ForWaterPipe);
	bool BPCanBeActivatedByPlayer(class AShooterPlayerController** PC);
	bool BPCanBeActivated();
	void BPContainerActivated();
	void BPContainerDeactivated();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ForceUpdateWind();
	void ExecuteUbergraph_WindTrubine(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
