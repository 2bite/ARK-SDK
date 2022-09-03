#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Exosuit_RTS_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C
// 0x0078 (0x3428 - 0x33B0)
class AExosuit_RTS_Character_BP_C : public AExosuit_Character_BP_C
{
public:
	class UParticleSystemComponent*                    RTSEmitter;                                               // 0x33B0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             ServerLastTimeStartRTS;                                   // 0x33B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalOfTimeForStartRTS;                                // 0x33C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RTSModeKeyOffset;                                         // 0x33C4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x33CC(0x0004) MISSED OFFSET
	TArray<struct FDinoSelectionGroup>                 RTSGroups;                                                // 0x33D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<class APrimalDinoCharacter*>                RTSCurrentSelection;                                      // 0x33E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame)
	class ARTSControlCharacter_C*                      RTSControlChar;                                           // 0x33F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGamepadLB_Held;                                         // 0x33F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInRtsMode;                                              // 0x33F9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x33FA(0x0002) MISSED OFFSET
	struct FVector                                     LastOrderedMoveToLocation;                                // 0x33FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMoveToMultiplier;                                      // 0x3408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RTSOffsetPosition;                                        // 0x340C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x3418(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Exosuit_RTS_Character_BP.Exosuit_RTS_Character_BP_C");
		return ptr;
	}


	void BPNotifyClearRider(class AShooterCharacter** RiderClearing);
	void BPOrderedMoveToLoc(struct FVector* DestLoc);
	float BP_GetCustomModifier_RotationRate();
	void OnRep_IsInRtsMode();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	bool BPHandleUseButtonPress(class AShooterPlayerController** RiderController);
	void ServerStartRTS();
	void UserConstructionScript();
	void InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_406();
	void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_405();
	void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_404();
	void InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_403();
	void ExecuteUbergraph_Exosuit_RTS_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
