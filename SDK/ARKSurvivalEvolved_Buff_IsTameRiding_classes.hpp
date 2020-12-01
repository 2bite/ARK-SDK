#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_IsTameRiding_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_IsTameRiding.Buff_IsTameRiding_C
// 0x005C (0x08FC - 0x08A0)
class ABuff_IsTameRiding_C : public ABuff_Base_C
{
public:
	int                                                TameBehaviorAttackIndex;                                  // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x08A4(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x08A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetDisplayName_ReturnValue;                      // 0x08B0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerController*                           CallFunc_GetOwnerController_ReturnValue;                  // 0x08C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x08C8(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              K2Node_InputAxisEvent_AxisValue3;                         // 0x08D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x08DC(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue2;                           // 0x08E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x08F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x08F1(0x0003) MISSED OFFSET
	float                                              K2Node_InputAxisEvent_AxisValue2;                         // 0x08F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_InputAxisEvent_AxisValue;                          // 0x08F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_IsTameRiding.Buff_IsTameRiding_C");
		return ptr;
	}


	void GetTimeBasedAlpha(float* Alpha);
	struct FStatusValueModifierDescription STATIC_GetBuffDescription();
	void DrawActiveStateText(int ActiveState, class AShooterHUD* HUD, float XPos, float YPos, float Scale);
	void GetActiveTameState(class APrimalDinoCharacter* MyRidingDino, int* IsInState);
	void STATIC_BPDrawBuffStatusHUD(class AShooterHUD** HUD, float* XPos, float* YPos, float* ScaleMult);
	void BuffTickServer(float* DeltaTime);
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	void UserConstructionScript();
	void InpActEvt_Jump_K2Node_InputActionEvent_148();
	void InpActEvt_Use_K2Node_InputActionEvent_147();
	void InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_58();
	void ReceiveBeginPlay();
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_125(float AxisValue);
	void ServerTameEvent();
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_58(float AxisValue);
	void InpAxisEvt_Turn_K2Node_InputAxisEvent_77(float AxisValue);
	void ExecuteUbergraph_Buff_IsTameRiding(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif