#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0078 (0x3208 - 0x3190)
class AExosuit_RTS_Character_BP_C : public AExosuit_Character_BP_C
{
public:
	class UParticleSystemComponent*                    RTSEmitter;                                               // 0x3190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	double                                             ServerLastTimeStartRTS;                                   // 0x3198(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IntervalOfTimeForStartRTS;                                // 0x31A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RTSModeKeyOffset;                                         // 0x31A4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x31AC(0x0004) MISSED OFFSET
	TArray<struct FDinoSelectionGroup>                 RTSGroups;                                                // 0x31B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame)
	TArray<class APrimalDinoCharacter*>                RTSCurrentSelection;                                      // 0x31C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SaveGame)
	class ARTSControlCharacter_C*                      RTSControlChar;                                           // 0x31D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsGamepadLB_Held;                                         // 0x31D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsInRtsMode;                                              // 0x31D9(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x31DA(0x0002) MISSED OFFSET
	struct FVector                                     LastOrderedMoveToLocation;                                // 0x31DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxMoveToMultiplier;                                      // 0x31E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RTSOffsetPosition;                                        // 0x31EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x31F8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

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
	void InpActEvt_ToggleRtsMode_K2Node_InputActionEvent_310();
	void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_309();
	void InpActEvt_RtsGamepadLeftShoulder_K2Node_InputActionEvent_308();
	void InpActEvt_RtsGamepadDpadUp_K2Node_InputActionEvent_307();
	void ExecuteUbergraph_Exosuit_RTS_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
