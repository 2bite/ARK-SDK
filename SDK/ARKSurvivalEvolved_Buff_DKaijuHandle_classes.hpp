#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DKaijuHandle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DKaijuHandle.Buff_DKaijuHandle_C
// 0x0091 (0x0A09 - 0x0978)
class ABuff_DKaijuHandle_C : public ABuff_PreventInput_C
{
public:
	class UAnimMontage*                                PlayerHandleAnim;                                         // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ADesertKaiju_Character_BP_C*                 DesertKaiju;                                              // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               InitPrevCamTransform;                                     // 0x0988(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0989(0x0003) MISSED OFFSET
	struct FVector                                     PrevCamLoc;                                               // 0x098C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    PrevCamRot;                                               // 0x0998(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x09A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09A5(0x0003) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x09B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x09B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x09B9(0x0007) MISSED OFFSET
	class AActor*                                      K2Node_Event_ForInstigator;                               // 0x09C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x09C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x09C9(0x0007) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x09D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x09D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x09D9(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x09E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x09E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x09E9(0x0007) MISSED OFFSET
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C;          // 0x09F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x09F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x09F9(0x0003) MISSED OFFSET
	struct FRotator                                    K2Node_CustomEvent_Rotation;                              // 0x09FC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SetActorRotation_ReturnValue;                    // 0x0A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DKaijuHandle.Buff_DKaijuHandle_C");
		return ptr;
	}


	void BPOverrideCameraViewTarget(struct FName* CurrentCameraMode, struct FVector* DesiredCameraLocation, struct FRotator* DesiredCameraRotation, float* DesiredFOV, bool* bOverrideCameraLocation, struct FVector* CameraLocation, bool* bOverrideCameraRotation, struct FRotator* CameraRotation, bool* bOverrideCameraFOV, float* CameraFOV);
	void BuffTickServer(float* DeltaTime);
	bool BPCheckPreventInput(TEnumAsByte<EPrimalCharacterInputType>* inputType);
	bool BPPreventFirstPerson();
	void PlayHandleAnim();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BPDeactivated(class AActor** ForInstigator);
	void Multi_UpdateRotation(const struct FRotator& Rotation);
	void ExecuteUbergraph_Buff_DKaijuHandle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
