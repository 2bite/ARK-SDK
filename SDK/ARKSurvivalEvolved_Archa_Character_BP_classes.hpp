#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Archa_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Archa_Character_BP.Archa_Character_BP_C
// 0x0044 (0x214C - 0x2108)
class AArcha_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Archa_C*    DinoCharacterStatus_BP_Archa_C1;                          // 0x2108(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TreeOverlapRange;                                         // 0x2110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeSpentOnTreeCache;                                     // 0x2114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalGiveSapOnTree;                                    // 0x2118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x211C(0x0004) MISSED OFFSET
	class UClass*                                      SapItemClass;                                             // 0x2120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventGlide;                                            // 0x2128(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bWasMountedFalling;                                       // 0x2129(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x212A(0x0002) MISSED OFFSET
	float                                              MountedAirControl;                                        // 0x212C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_PlayAnimMontage_ReturnValue;                     // 0x2130(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_relLoc;                                // 0x2134(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    K2Node_CustomEvent_relRot;                                // 0x2140(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Archa_Character_BP.Archa_Character_BP_C");
		return ptr;
	}


	float DoOverrideMountedAirControl(float* AirControlIn);
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void OnRep_bPreventGlide();
	void HandleMountedDinoAction(class AShooterPlayerController** PC);
	void BPCharacterSleeped();
	void GiveSap();
	bool BPOnAttachmentReplication();
	void BPOnSetMountedDino();
	void BPOnClearMountedDino();
	void ReceiveTick(float* DeltaSeconds);
	float BPGetGravityZScale();
	void UserConstructionScript();
	void MultiFinishAttachingToTree(const struct FVector& relLoc, const struct FRotator& relRot);
	void ExecuteUbergraph_Archa_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
