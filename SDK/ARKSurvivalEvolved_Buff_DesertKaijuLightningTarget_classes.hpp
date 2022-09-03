#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DesertKaijuLightningTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C
// 0x0359 (0x0CD1 - 0x0978)
class ABuff_DesertKaijuLightningTarget_C : public ABuff_Base_C
{
public:
	class AActor*                                      DesertKaiju;                                              // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	double                                             StartTime;                                                // 0x0980(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LightningLocation;                                        // 0x0988(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Deactivated;                                              // 0x0994(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xB];                                       // 0x0995(0x000B) MISSED OFFSET
	struct UObject_FTransform                          RelativeTransform;                                        // 0x09A0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RelativeLoc;                                              // 0x09D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UseRelativeLoc;                                           // 0x09DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x09DD(0x0003) MISSED OFFSET
	struct FVector                                     DelayedLightningLoc;                                      // 0x09E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x09EC(0x0004) MISSED OFFSET
	TArray<struct FName>                               DKaijuFXSocketNames;                                      // 0x09F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FName                                       ClosestSocket;                                            // 0x0A00(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABuff_DKaijuDelayedLightning_C*              DelayedLightningBuff;                                     // 0x0A08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     ImpactPt;                                                 // 0x0A10(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FoundKaiju;                                               // 0x0A1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0A1D(0x0003) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue;                        // 0x0A20(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C;          // 0x0A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0A58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0A59(0x0007) MISSED OFFSET
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C2;         // 0x0A60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0A68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0A69(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0A6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C3;         // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0A80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A81(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0A84(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue;               // 0x0A90(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x0A9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc2;                                  // 0x0AA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_UseRelative;                           // 0x0AB4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0AB5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_LineTraceComponent_HitLocation;               // 0x0AB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_LineTraceComponent_HitNormal;                 // 0x0AC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_K2_LineTraceComponent_BoneName;                  // 0x0AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_LineTraceComponent_ReturnValue;               // 0x0AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0AD9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_InverseTransformLocation_ReturnValue;            // 0x0ADC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x8];                                       // 0x0AE8(0x0008) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetTransform_ReturnValue2;                       // 0x0AF0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_TransformLocation_ReturnValue;                   // 0x0B20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_FindClosestFXSocket_ClosestSocket;               // 0x0B2C(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_NameName_ReturnValue;                 // 0x0B34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0B35(0x0003) MISSED OFFSET
	class USceneComponent*                             K2Node_CustomEvent_Root;                                  // 0x0B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             K2Node_CustomEvent_Parent;                                // 0x0B40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_SocketName;                            // 0x0B48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_Loc;                                   // 0x0B50(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_CustomEvent_Relative;                              // 0x0B5C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0B5D(0x0003) MISSED OFFSET
	struct FName                                       K2Node_CustomEvent_ClosestSocket;                         // 0x0B60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      K2Node_CustomEvent_DmgCauser;                             // 0x0B68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     K2Node_CustomEvent_RelativeLoc;                           // 0x0B70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x4];                                       // 0x0B7C(0x0004) MISSED OFFSET
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C4;         // 0x0B80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0B88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x0B89(0x0007) MISSED OFFSET
	class ADesertKaiju_Character_BP_C*                 K2Node_DynamicCast_AsDesertKaiju_Character_BP_C5;         // 0x0B90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0B98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0B99(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue3;                // 0x0B9C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x0BA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue2;              // 0x0BB4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_SelectVector_ReturnValue;                        // 0x0BC0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x0BCC(0x0004) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue;                       // 0x0BD0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct UObject_FTransform                          CallFunc_MakeTransform_ReturnValue2;                      // 0x0C00(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue;         // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_BeginSpawningActorFromClass_ReturnValue2;        // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_DKaijuDelayedLightningOnKaiju_C*       CallFunc_FinishSpawningActor_ReturnValue;                 // 0x0C40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue;                 // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ABuff_DKaijuDelayedLightning_C*              CallFunc_FinishSpawningActor_ReturnValue2;                // 0x0C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class USceneComponent*                             CallFunc_K2_GetRootComponent_ReturnValue2;                // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue4;                // 0x0C60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue3;              // 0x0C6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue;              // 0x0C78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_DoesImplementInterface_ReturnValue2;             // 0x0C79(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x6];                                       // 0x0C7A(0x0006) MISSED OFFSET
	class ACharacter*                                  K2Node_DynamicCast_AsCharacter;                           // 0x0C80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0C88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0C89(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue2;                  // 0x0C8C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x0C98(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Subtract_VectorVector_ReturnValue4;              // 0x0CA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_LineTraceComponent_HitLocation2;              // 0x0CB0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_LineTraceComponent_HitNormal2;                // 0x0CBC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       CallFunc_K2_LineTraceComponent_BoneName2;                 // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_K2_LineTraceComponent_ReturnValue2;              // 0x0CD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_DesertKaijuLightningTarget.Buff_DesertKaijuLightningTarget_C");
		return ptr;
	}


	void FindClosestFXSocket(const struct FVector& CompareLoc, struct FName* ClosestSocket);
	void BuffTickServer(float* DeltaTime);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void BPDeactivated(class AActor** ForInstigator);
	void SetBuffCauser(class AActor** CausedBy);
	void UserConstructionScript();
	void SetLightningLoc();
	void Client_DeactivateParticle();
	void FireDelayedLightning(const struct FVector& Loc, bool UseRelative);
	void Multi_AttachFXToKaiju(class USceneComponent* Root, class USceneComponent* Parent, const struct FName& SocketName);
	void Multi_SpawnNextLightning(const struct FVector& Loc, bool Relative, const struct FName& ClosestSocket, class AActor* DmgCauser, const struct FVector& RelativeLoc);
	void ExecuteUbergraph_Buff_DesertKaijuLightningTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
