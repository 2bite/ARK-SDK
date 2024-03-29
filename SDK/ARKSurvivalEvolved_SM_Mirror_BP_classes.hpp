#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_Mirror_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_Mirror_BP.SM_Mirror_BP_C
// 0x0274 (0x0D5C - 0x0AE8)
class ASM_Mirror_BP_C : public AStructureBaseBP_C
{
public:
	class USphereComponent*                            TriggerSphere;                                            // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MirorrDefaultFOV;                                         // 0x0AF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MirrorFOVVariance;                                        // 0x0AF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MirrorDampenTurnTest;                                     // 0x0AF8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMirrorEnabled;                                           // 0x0AFC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0AFD(0x0003) MISSED OFFSET
	float                                              MirrorEnableDistance;                                     // 0x0B00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0B04(0x0004) MISSED OFFSET
	class USceneCaptureComponent2D*                    SceneCaptureRef;                                          // 0x0B08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       MirrorSemaphore;                                          // 0x0B10(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetMirrorBlend;                                        // 0x0B18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentMirrorBlend;                                       // 0x0B1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFadingOut;                                             // 0x0B20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0B21(0x0003) MISSED OFFSET
	float                                              MirrorBlendInOutSpeed;                                    // 0x0B24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0B29(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0B2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0B30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x0B34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0B40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0B4C(0x0004) MISSED OFFSET
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue;              // 0x0B50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0B58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetCameraLocation_ReturnValue;                   // 0x0B64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x0B70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0B71(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x0B74(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x0B80(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x0B8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x7];                                       // 0x0B91(0x0007) MISSED OFFSET
	class USceneCaptureComponent2D*                    CallFunc_AddComponent_ReturnValue;                        // 0x0B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_AddComponent_RelativeTransform_AddComponentDefaultTransform;// 0x0BA0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0BD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0BD1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x0BD4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x0BE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x0BE8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x0BF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x0BF8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x0C04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0C05(0x0003) MISSED OFFSET
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x0C08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0C0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Semaphore_Release_ReturnValue;                   // 0x0C10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0C11(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_SemaphoreName;                         // 0x0C14(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x4];                                       // 0x0C1C(0x0004) MISSED OFFSET
	class AActor*                                      K2Node_Event_OtherActor;                                  // 0x0C20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x0C28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x0C2C(0x0004) MISSED OFFSET
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0C38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0C39(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0C3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0C41(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_GetOverlappingActors_OverlappingActors;          // 0x0C48(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0C58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0C5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_FloatFloat_ReturnValue;                 // 0x0C5D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x0C5E(0x0002) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x0C60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetMirrorBlend_CurrentMirrorBlend;               // 0x0C64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NearlyEqual_FloatFloat_ReturnValue;              // 0x0C68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x0C69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x2];                                       // 0x0C6A(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_Constant_ReturnValue;                  // 0x0C6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseRenderTarget_Can_Use;                      // 0x0C70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanUseRenderTarget_Can_Use2;                     // 0x0C71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x0C72(0x0006) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue2;                       // 0x0C78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Semaphore_Release_ReturnValue2;                  // 0x0C80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0C81(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x0C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetPlatformName_ReturnValue;                     // 0x0C90(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_EqualEqual_StriStri_ReturnValue;                 // 0x0CA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x0CA1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetCameraLocation_ReturnValue2;                  // 0x0CA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0CB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0CB1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x0CB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_LessLess_VectorRotator_ReturnValue;              // 0x0CC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue2;                              // 0x0CCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Conv_VectorToRotator_ReturnValue;                // 0x0CD0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x0CDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x0CE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x0CE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x0CE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x0CEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x0CF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x0CF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x0CF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0CFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0D00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x0D04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_GetPlatformName_ReturnValue2;                    // 0x0D08(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x0D18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_StriStri_ReturnValue2;                // 0x0D1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0D1D(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x0D20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x0D24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x0D25(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_MakeRot_ReturnValue;                             // 0x0D28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_ComposeRotators_ReturnValue;                     // 0x0D34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AGameState*                                  CallFunc_GetGameState_ReturnValue3;                       // 0x0D40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Semaphore_TryGrab_ReturnValue;                   // 0x0D48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x3];                                       // 0x0D49(0x0003) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0D4C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_Mirror_BP.SM_Mirror_BP_C");
		return ptr;
	}


	void CanUseRenderTarget(bool* Can_Use);
	void GetMirrorBlend(float* CurrentMirrorBlend);
	void ReceiveDestroyed();
	void SetMirrorBlend(float NewMirrorBlend);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ForcedTick();
	void DistanceCheck();
	void OnSemaphoreTaken_Event(const struct FName& SemaphoreName);
	void ReceiveActorBeginOverlap(class AActor** OtherActor);
	void DestroyMirror();
	void LerpMirrorBlend();
	void FadeOutDestroy();
	void ExecuteUbergraph_SM_Mirror_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
