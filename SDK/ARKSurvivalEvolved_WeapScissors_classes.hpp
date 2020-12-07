#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapScissors_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapScissors.WeapScissors_C
// 0x01F8 (0x0F50 - 0x0D58)
class AWeapScissors_C : public AShooterWeapon_Melee
{
public:
	float                                              HeadHairLocksPerPercent;                                  // 0x0D58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacialHairLocksPerPercent;                                // 0x0D5C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeadHairCutDurabilityCostPerPercent;                      // 0x0D60(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FacialHairCutDurabilityCostPerPercent;                    // 0x0D64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinCutDurabilityCost;                                     // 0x0D68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0D6C(0x0004) MISSED OFFSET
	class AShooterCharacter*                           HairCutTarget;                                            // 0x0D70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               bAllowPositiveHaircut;                                    // 0x0D78(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0D79(0x0003) MISSED OFFSET
	float                                              ItemDurabilityToSubtract;                                 // 0x0D7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DyeHairColorSaturation;                                   // 0x0D80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OnDinoItemDurabilityToSubtract;                           // 0x0D84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x0D88(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate2;                    // 0x0D98(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Hairstyle*                               K2Node_CustomEvent_TheUI;                                 // 0x0DA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewHeadHairIndex2;                     // 0x0DB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewFacialHairIndex2;                   // 0x0DB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewHeadHairPercent2;                   // 0x0DB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewFacialHairPercent2;                 // 0x0DBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_HeadHairDyeID12;                       // 0x0DC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_HeadHairDyeID22;                       // 0x0DC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_FacialHairDyeID12;                     // 0x0DC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_FacialHairDyeID22;                     // 0x0DCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_TargetChar2;                           // 0x0DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_TargetChar;                            // 0x0DD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValidHairCutTarget_bIsValid;                   // 0x0DE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValidHairCutTarget_bIsValid2;                  // 0x0DE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0DE2(0x0002) MISSED OFFSET
	int                                                K2Node_CustomEvent_NewHeadHairIndex;                      // 0x0DE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_NewFacialHairIndex;                    // 0x0DE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewHeadHairPercent;                    // 0x0DEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_CustomEvent_NewFacialHairPercent;                  // 0x0DF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_HeadHairDyeID1;                        // 0x0DF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_HeadHairDyeID2;                        // 0x0DF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_FacialHairDyeID1;                      // 0x0DFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                K2Node_CustomEvent_FacialHairDyeID2;                      // 0x0E00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0E04(0x0004) MISSED OFFSET
	class AShooterCharacter*                           K2Node_CustomEvent_ForTarget;                             // 0x0E08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlive_ReturnValue;                             // 0x0E10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0E11(0x0003) MISSED OFFSET
	int                                                CallFunc_GetFacialHairIndex_ReturnValue;                  // 0x0E14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0E18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0E19(0x0003) MISSED OFFSET
	int                                                CallFunc_GetHeadHairIndex_ReturnValue;                    // 0x0E1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetPercentageOfFacialHairGrowth_ReturnValue;     // 0x0E20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue2;                  // 0x0E24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0E25(0x0003) MISSED OFFSET
	float                                              CallFunc_GetPercentageOfHeadHairGrowth_ReturnValue;       // 0x0E28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValidHairCutTarget_bIsValid3;                  // 0x0E2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0E2D(0x0003) MISSED OFFSET
	class UPrimalItem*                                 CallFunc_BPFindItemWithID_ReturnValue;                    // 0x0E30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem*                                 CallFunc_BPFindItemWithID_ReturnValue2;                   // 0x0E38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPrimalItem_Dye*                             K2Node_DynamicCast_AsPrimalItem_Dye;                      // 0x0E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0E49(0x0007) MISSED OFFSET
	class UPrimalItem_Dye*                             K2Node_DynamicCast_AsPrimalItem_Dye2;                     // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0E58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x0E59(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_GetObjectClass_ReturnValue;                      // 0x0E60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      CallFunc_GetObjectClass_ReturnValue2;                     // 0x0E68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UClass*                                      K2Node_ClassDynamicCast_AsPrimalItem;                     // 0x0E70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast_CastSuccess;                      // 0x0E78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0E79(0x0007) MISSED OFFSET
	class UClass*                                      K2Node_ClassDynamicCast_AsPrimalItem2;                    // 0x0E80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast2_CastSuccess;                     // 0x0E88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0E89(0x0003) MISSED OFFSET
	int                                                CallFunc_BPIncrementItemTemplateQuantity_ReturnValue;     // 0x0E8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_BPIncrementItemTemplateQuantity_ReturnValue2;    // 0x0E90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue;                                // 0x0E94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x0E98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x0E99(0x0003) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue2;                               // 0x0E9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x0EA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0EA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0EA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsShipping_ReturnValue;                          // 0x0EA3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x0EA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0EA5(0x0003) MISSED OFFSET
	struct FLinearColor                                CallFunc_ChangeSaturation_ReturnValue;                    // 0x0EA8(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue3;                               // 0x0EB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select3_CmpSuccess;                                // 0x0EBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0EBD(0x0003) MISSED OFFSET
	float                                              CallFunc_FMin_ReturnValue;                                // 0x0EC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FLinearColor                                CallFunc_ChangeSaturation_ReturnValue2;                   // 0x0EC4(0x0010) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x0ED4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0ED8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x0EDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue;                              // 0x0EE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x0EE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0EE5(0x0003) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue4;                               // 0x0EE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select4_CmpSuccess;                                // 0x0EEC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0EED(0x0003) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x0EF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue2;                               // 0x0EF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0EFC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x0F08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x0F0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x0F10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0F14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_FFloor_ReturnValue2;                             // 0x0F18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue3;                               // 0x0F1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADino_Character_BP_Haircuttable_C*           K2Node_CustomEvent_DoRequestOnDino;                       // 0x0F20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0F28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0F29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValidHairCutTarget_bIsValid4;                  // 0x0F2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x1];                                       // 0x0F2B(0x0001) MISSED OFFSET
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate3;                    // 0x0F2C(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	unsigned char                                      UnknownData18[0x4];                                       // 0x0F3C(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceSingle_NEW_ActorsToIgnore_RefProperty;  // 0x0F40(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapScissors.WeapScissors_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void STATIC_IsValidHairCutTarget(class AActor* PotentialTarget, bool* bIsValid);
	void OpenUI(class AShooterCharacter* TheTarget);
	void GiveHairLocks(int NumLocks);
	void STATIC_BPAnimNotifyCustomEvent(struct FName* CustomEventName, class USkeletalMeshComponent** MeshComp, class UAnimSequenceBase** Animation, class UAnimNotify** AnimNotifyObject);
	struct FWeaponAnim BPGetSelectedMeleeAttackAnim();
	void UserConstructionScript();
	void InitializeUI(class UUI_Hairstyle* TheUI);
	void OnHairStyleAccepted__DelegateSignature_Event(int newHeadHairIndex, int newFacialHairIndex, float NewHeadHairPercent, float NewFacialHairPercent, int HeadHairDyeID1, int HeadHairDyeID2, int FacialHairDyeID1, int FacialHairDyeID2);
	void ClearFacialHairClicked();
	void ClearHeadHairClicked();
	void ServerClearFacialHairColor(class AShooterCharacter* TargetChar);
	void ServerClearHeadHairColor(class AShooterCharacter* TargetChar);
	void TheServerHairStyleAccepted(int newHeadHairIndex, int newFacialHairIndex, float NewHeadHairPercent, float NewFacialHairPercent, int HeadHairDyeID1, int HeadHairDyeID2, int FacialHairDyeID1, int FacialHairDyeID2, class AShooterCharacter* forTarget);
	void DoServerRequestDinoHaircut(class ADino_Character_BP_Haircuttable_C* DoRequestOnDino);
	void ExecuteUbergraph_WeapScissors(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
