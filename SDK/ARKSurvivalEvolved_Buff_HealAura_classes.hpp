#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_HealAura_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_HealAura.Buff_HealAura_C
// 0x03F1 (0x0D41 - 0x0950)
class ABuff_HealAura_C : public APrimalBuff
{
public:
	class UStaticMeshComponent*                        HealingSphere;                                            // 0x0950(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeOut_NewTrack_0_38BD71CB44D809C06EDB519A636E5289;      // 0x0958(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeOut__Direction_38BD71CB44D809C06EDB519A636E5289;      // 0x095C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x095D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeOut;                                                  // 0x0960(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadeIn_NewTrack_0_025D4090499A53ED4A6CC8A799C8C8B7;       // 0x0968(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    FadeIn__Direction_025D4090499A53ED4A6CC8A799C8C8B7;       // 0x096C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x096D(0x0003) MISSED OFFSET
	class UTimelineComponent*                          FadeIn;                                                   // 0x0970(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              hudMessageDisplayTime;                                    // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x097C(0x0004) MISSED OFFSET
	TArray<class APrimalCharacter*>                    healedCharacters;                                         // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              minHealingPerSecond;                                      // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxHealingPerSecond;                                      // 0x0994(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              healthPercentToRecoverPerSecond;                          // 0x0998(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x099C(0x0004) MISSED OFFSET
	class UParticleSystem*                             healParticleEmitter;                                      // 0x09A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UParticleSystemComponent*>            particleEffects;                                          // 0x09A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              foodUsedPerHealthUnitRecovered;                           // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              healthPercentToRecoverPerSecondInstigator;                // 0x09BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              healthPercentToRecoverPerSecondPlayer;                    // 0x09C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              foodUsedPerHealthUnitRecoveredPlayer;                     // 0x09C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minHealingPerSecondPlayer;                                // 0x09C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxHealingPerSecondPlayer;                                // 0x09CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              healingPulseDuration;                                     // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              healingPulseFadeInDuration;                               // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              healingPulseFadeOutDuration;                              // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              healingRadius;                                            // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               canHealPlayers;                                           // 0x09E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isHealingActive;                                          // 0x09E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x09E2(0x0002) MISSED OFFSET
	float                                              minimumFoodAmountToMaintainHealing;                       // 0x09E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxNumDinosToHeal;                                        // 0x09E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x09EC(0x0004) MISSED OFFSET
	struct FStatusValueModifierDescription             healingStartedMessage;                                    // 0x09F0(0x0050) (Edit, BlueprintVisible)
	struct FStatusValueModifierDescription             notEnoughFoodToContinueMessage;                           // 0x0A40(0x0050) (Edit, BlueprintVisible)
	bool                                               healWildDinosWithSameTargetAndWildDaeodons;               // 0x0A90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0A91(0x0003) MISSED OFFSET
	float                                              foodUsedPerHealthUnitRecoveredInstigator;                 // 0x0A94(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minHealingPerSecondInstigator;                            // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              maxHealingPerSecondInstigator;                            // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              foodCostPerSecond;                                        // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               disablePoopWhileHealing;                                  // 0x0AA4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0AA5(0x0003) MISSED OFFSET
	int                                                maxFoodItemsToConsumePerHealing;                          // 0x0AA8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0AAC(0x0004) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x0AB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlly_isAllyOrSomeTeam;                         // 0x0AB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0AB9(0x0003) MISSED OFFSET
	int                                                Temp_int_Variable;                                        // 0x0ABC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x0AC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue;                 // 0x0AC4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0AC5(0x0003) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_character2;                            // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue2;                            // 0x0AD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0xE];                                       // 0x0AD2(0x000E) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetSocketTransform_ReturnValue;                  // 0x0AE0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Location;                         // 0x0B10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_BreakTransform_Rotation;                         // 0x0B1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BreakTransform_Scale;                            // 0x0B28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0B34(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B35(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x0B36(0x0002) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAttached_ReturnValue;                // 0x0B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue3;                            // 0x0B40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x0B41(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Radius;                                // 0x0B44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_MakeVector_ReturnValue;                          // 0x0B48(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0B54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x0B58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x0B59(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x0B5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0B60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x0B61(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x0B64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0B70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x0B71(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x0B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x0B81(0x0007) MISSED OFFSET
	class UMaterialInstanceDynamic*                    CallFunc_CreateDynamicMaterialInstance_ReturnValue;       // 0x0B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue4;                            // 0x0B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0B91(0x0007) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue2;                        // 0x0B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x0BA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0BA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x0BA9(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x0BAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x0BB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable2;                                       // 0x0BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x0BB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue2;                // 0x0BBC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x0BBD(0x0003) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue3;                        // 0x0BC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic2;            // 0x0BC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0BD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x0BD1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x6];                                       // 0x0BD2(0x0006) MISSED OFFSET
	class APrimalCharacter*                            K2Node_CustomEvent_character;                             // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0BE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x0BE1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x0BE2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x0BE3(0x0001) MISSED OFFSET
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue3;                    // 0x0BE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Add_ReturnValue;                           // 0x0BEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x0BF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x0BF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x6];                                       // 0x0BF2(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item;                                  // 0x0BF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue2;                       // 0x0C00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue4;                    // 0x0C04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue5;                            // 0x0C08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0C09(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item2;                                 // 0x0C10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Array_Length_ReturnValue3;                       // 0x0C18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue6;                            // 0x0C1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x0C1D(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue5;                    // 0x0C20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0C24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x0C25(0x0003) MISSED OFFSET
	class AShooterCharacter*                           K2Node_CustomEvent_playerCharacter;                       // 0x0C28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FName                                       K2Node_CustomEvent_commandName;                           // 0x0C30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue;                       // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x0C41(0x0007) MISSED OFFSET
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x0C48(0x0040) (Transient, DuplicateTransient)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue;              // 0x0C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x0C90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0C98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x0C99(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0CA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0CA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x0CA9(0x0007) MISSED OFFSET
	class AController*                                 CallFunc_GetController_ReturnValue2;                      // 0x0CB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue2;             // 0x0CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AController*                                 CallFunc_GetController_ReturnValue3;                      // 0x0CC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           CallFunc_CastToPlayerController_ReturnValue3;             // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue7;                            // 0x0CD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x0CD1(0x0003) MISSED OFFSET
	float                                              K2Node_CustomEvent_Delay;                                 // 0x0CD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast5_CastSuccess;                          // 0x0CE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x0CE1(0x0007) MISSED OFFSET
	class UClass*                                      CallFunc_GetObjectClass_ReturnValue;                      // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter2;                    // 0x0CF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast6_CastSuccess;                          // 0x0CF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x0CF9(0x0007) MISSED OFFSET
	class UClass*                                      K2Node_ClassDynamicCast_AsPrimalBuff;                     // 0x0D00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ClassDynamicCast_CastSuccess;                      // 0x0D08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x0D09(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue2;                // 0x0D10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                Temp_int_Variable3;                                       // 0x0D18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsAlly_isAllyOrSomeTeam2;                        // 0x0D1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x3];                                       // 0x0D1D(0x0003) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue6;                    // 0x0D20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GreaterEqual_IntInt_ReturnValue3;                // 0x0D24(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x0D25(0x0003) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_Array_Get_Item3;                                 // 0x0D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue8;                            // 0x0D30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue9;                            // 0x0D31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x6];                                       // 0x0D32(0x0006) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwner_ReturnValue;                            // 0x0D38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0D40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_HealAura.Buff_HealAura_C");
		return ptr;
	}


	void IsAlly(int otherTargetingTeam, bool* isAllyOrSomeTeam);
	bool BPClientHandleNetExecCommand(struct FName* CommandName, class APlayerController** ForPC, struct FBPNetExecParams* ExecParams);
	void HasReachedMaxHealedCharacters(bool* hasReachedMax);
	void TryHealCharacterAndSpawnParticles(class APrimalCharacter* characterToHeal, bool dontHealIfAlreadyHealing, float DeltaTime, bool isInstigator);
	void CheckStopHealingCondition(bool* shouldStopHealing);
	void ShowHUDNotification(const struct FStatusValueModifierDescription& notificationDescription, class APlayerController* PlayerController);
	void CalculateFoodConsumptionForHealingAmount(float healAmount, class APrimalCharacter* Character, float* foodAmount);
	void StopHealing(bool doMulticast);
	void Get_Current_Status_Amount(class APawn* Pawn, TEnumAsByte<EPrimalCharacterStatusValue> statusField, float* food);
	void ConsumeFood(float foodAmount);
	void DisableHealingForCharacter(class APrimalCharacter* characterIndex, bool disableParticles);
	void RestoreBitFlag(class APrimalCharacter* forCharacter);
	void CanHealCharacter(class APrimalCharacter* PrimalCharacter, bool* canHeal);
	void CleanHealArray();
	void BuffTickServer(float* DeltaTime);
	void Activate_Healing();
	void TryHeal_Character_and_Consume_Food(class APrimalCharacter* Character, bool isSelf, float DeltaTime, bool* couldHeal);
	void CheckFoodCondition(bool* hasEnoughFood);
	void HealCharacter(class APrimalCharacter* Character, float amount);
	void Restore_All_Bit_Flags();
	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveDestroyed();
	void Calculate_Healing_Amount_For_Character(class APrimalCharacter* Character, bool isSelf, float DeltaTime, float* healingAmount);
	void UserConstructionScript();
	void FadeOut__FinishedFunc();
	void FadeOut__UpdateFunc();
	void FadeIn__FinishedFunc();
	void FadeIn__UpdateFunc();
	void SpawnHealParticleOnCharacter(class APrimalCharacter* Character);
	void FadeInPulse(float Radius);
	void ReceiveBeginPlay();
	void FadeOutPulse();
	void DestroyHealingParticleForCharacter_Multicast(class APrimalCharacter* Character);
	void DeactivateAndDestroyAllParticles_Multicast();
	void DeactivateAllParticles();
	void DestroyAllHealingParticles();
	void DeactivateAndDestroyAllParticles();
	void FadeOutPulse_Multicast();
	void FadeInPulse_Multicast();
	void ShowHUDNotificationForPlayer_FromServer(class AShooterCharacter* PlayerCharacter, const struct FName& CommandName);
	void DeactivateAfterDelay(float Delay);
	void ExecuteUbergraph_Buff_HealAura(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
