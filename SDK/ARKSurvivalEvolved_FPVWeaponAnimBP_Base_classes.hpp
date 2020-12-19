#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVWeaponAnimBP_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base.FPVWeaponAnimBP_Base_C
// 0x0ED8 (0x1218 - 0x0340)
class UFPVWeaponAnimBP_Base_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_A11AD81847780160E1665C9911EB4B59;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_463D56654F424B44B742F1BEEDA4F197;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3A593C084F130C991CABE2A461E334CA;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_44E02ED545CE6CBB00AC35AE05F42412;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_596A116B415D86CBDC07A5A7C9C23C42;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A3170B8E46DAA62BE1376E89664C7A7C;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DB2D920F43BA392B037E2791094B2346;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D4303E7A416D2CDD6A71089778F1EEDE;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_258611F6499D20B80824CBB0593462CD;// 0x0430(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FFE8072045BC8D564F09B28C6141532F;// 0x0448(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2101A2546ECC2D3A85FC69231C6C9DF;// 0x0460(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E04EC57A41A12C80ADE8D58D30201E6E;// 0x0478(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_6B2D0F234506C2AC185942BD7855858A;// 0x0490(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_06DB981845275E356771018FA5ED1655;// 0x04A8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D95518054F5D5C07CBDF9BAC0651B7E6;// 0x04C0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_50FA270246AF28F8C03F0AA6E47368CC;// 0x04D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_68ABD7E04FF9B6F9DC6776B56AB753B3;// 0x0508(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B6347FC14A740618CB8483B9A7209DF4;// 0x0530(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_FED6634944225C11456B7090AB3BA86E;// 0x0560(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9E2EF26C4CB30D337F043E87B850172D;// 0x0588(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_724FCAE24EAC3D86015677B2BC34EFBC;// 0x05B8(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AE34426541FF273E6ACB3FB0324F868F;// 0x0618(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_86AA74604FCFB3A9352C23965CFF476C;// 0x0640(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0668(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_DB2AC14C4F2D31E52E8413A4EB301BC5;// 0x0670(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2F12DC6C439B153D2A98A49ED808528C;// 0x0720(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_44C3BA1141C1C89244660BACB32893DB;// 0x0750(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB958199417E89F4872E55A01456EE90;// 0x07B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F26D76BB44E3977F1C75DBA494CF67FD;// 0x07E0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54F1252643B68DBC2D4C2682F4861E49;// 0x0840(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1AD446C7494EF93F7BACBFA824F03E2A;// 0x0870(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6C1D9A3D45715E78A051498246978F81;// 0x0898(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_53DB1E7C47ABFE25AA237F814561A884;// 0x08C8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0CC67AE7417E9092E446F4925EACEC4B;// 0x08F0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F0C851C844CD74E3968D608B6028E88A;// 0x0920(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52FD574041A6F45BDBAFAB974626D819;// 0x0948(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D333E8714F17EC6F04B0AAB8945BFDDC;// 0x0978(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_04E71E404D1BF8C9E403B8A55B2598CF;// 0x09D8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_710423F34ABF7C808DB867AE35382D2D;// 0x0A00(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0A28(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_299E41044CBCB2F66C0943922F96E7D1;// 0x0A30(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A46D6893438DA2E33862C7BF4D25FDB7;// 0x0AE0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_156B9C464BD3FDB812734D8BF77F0166;// 0x0B10(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D2FD8C44421D158C3A1C294EE4E5DE5;// 0x0B70(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_4956329745EB0C4D7FCA6DA69697A3EC;// 0x0BA0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8470FE1F4D599C1ED21C3887BABAB3C9;// 0x0C00(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C038767C42E79638BB0166A005F8AFA1;// 0x0C30(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_97E0EFD2435D68B0006278AF9D811B3B;// 0x0C58(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_D5B28844487B8C239FE3789C22462F71;// 0x0CB8(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9DED2075461A9975F43D16855CF83F21;// 0x0D38(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2DF4F4DA4240527C724FA78B05AFF371;// 0x0D50(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CC1EF24A41E779C9A7047FA5AE46FBE4;// 0x0D68(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_980F12C44042D39FC230A1830DA7538D;// 0x0D98(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_09D714824673EF21837900809B1DD518;// 0x0DC0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2BE7DBC14A2A4357939196BF042AFDC7;// 0x0DF0(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_85A81A754E903BCDE2FB03BE8E422FCA;// 0x0E18(0x0060)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0E78(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_7F7C23A64EC13555A97C519B87945B74;// 0x0E80(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6C812FDC4200B1AACD9A20AEFB7B6D41;// 0x0F30(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_1EE8C48742E2752EA6747694D67D6517;// 0x0F58(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3E8D35FC447CEA4F644A579C82D6D35B;// 0x0F80(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_FBE626FD43821C2AE8D5D795DEE47C25;// 0x1030(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_43CF7A724A1AAA7BFCA9E8960DECA81F;// 0x1058(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_FE1E4680455A8ECF27C53DB0F1A17259;      // 0x1080(0x0038)
	bool                                               IsRunning;                                                // 0x10B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x10B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x10BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMoving;                                               // 0x10BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x10BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x10C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x10C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x10C2(0x0006) MISSED OFFSET
	double                                             LastSwimmingTime;                                         // 0x10C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInventory;                                            // 0x10D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInventory;                                             // 0x10D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x10D2(0x0002) MISSED OFFSET
	struct FVector                                     DefaultTranslation;                                       // 0x10D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseNoClipAmmoIdle;                                       // 0x10E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasClipAmmo;                                             // 0x10E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingShield;                                           // 0x10E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x10E3(0x0001) MISSED OFFSET
	float                                              UsingShieldWeight;                                        // 0x10E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBlockingWithShield;                                    // 0x10E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x10E9(0x0003) MISSED OFFSET
	struct FVector                                     BlockingShieldTranslation;                                // 0x10EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockingShieldWeight;                                     // 0x10F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BlockingShieldRotation;                                   // 0x10FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1108(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1109(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x110A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x110B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x110C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x110D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x110E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x110F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x1110(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x1111(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1112(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1113(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x1114(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x1115(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x1116(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1117(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x1118(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1119(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x111A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0x111B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x111C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x111D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x111E(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1120(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x4];                                       // 0x1124(0x0004) MISSED OFFSET
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x1128(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x1130(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1138(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x7];                                       // 0x1139(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x1140(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x1148(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x1149(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x1150(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1158(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1159(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x2];                                       // 0x115A(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation;// 0x115C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation;// 0x1168(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlockingShieldOffsets_ReturnValue;            // 0x1174(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsBlockingWithShield_ReturnValue;                // 0x1175(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsUsingShield_ReturnValue;                       // 0x1176(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x1177(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x1178(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1184(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x1188(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTargeting_ReturnValue;                         // 0x1194(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1195(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetCurrentAcceleration_ReturnValue;              // 0x1198(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x11A4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x11B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x11B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x11B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x11BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x11C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x11C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x11C2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x11C3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x11C4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x11CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x11D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x11D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x11D5(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x11D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue14;                       // 0x11DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x11DD(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x11E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x11E4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x11E5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x11E6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue15;                       // 0x11E7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x11E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x11F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x11F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x11FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x11FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0x11FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x1];                                       // 0x11FF(0x0001) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1200(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x1204(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue16;                       // 0x1208(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue14;                        // 0x1209(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x120A(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x120C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue15;                        // 0x1210(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue16;                        // 0x1211(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x1212(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue4;                          // 0x1214(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base.FPVWeaponAnimBP_Base_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1086();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1085();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1084();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1083();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1082();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1081();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1080();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1079();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1078();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1077();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1076();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1075();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1074();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_1770();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_ModifyBone_396();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_SequencePlayer_2420();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_1771();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_SequencePlayer_2421();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_1772();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_1767();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_ModifyBone_395();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_SequencePlayer_2414();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_1768();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_SequencePlayer_2415();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_BlendListByBool_1769();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_LayeredBoneBlend_86();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_TransitionResult_1072();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_ModifyBone_394();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_AnimGraphNode_ModifyBone_393();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVWeaponAnimBP_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
