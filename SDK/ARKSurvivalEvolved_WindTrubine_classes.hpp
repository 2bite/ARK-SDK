#pragma once

// ARKSurvivalEvolved (320.18) SDK

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
// 0x0020 (0x0DF8 - 0x0DD8)
class AWindTrubine_C : public AStructureItemContainerBaseBP_C
{
public:
	class UChildActorComponent*                        ActivatedEmitter;                                         // 0x0DD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      SkeletalMesh1;                                            // 0x0DE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnOffForWindLessThan;                                   // 0x0DE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPowerDistance;                                         // 0x0DEC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentWind;                                              // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0DF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

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
