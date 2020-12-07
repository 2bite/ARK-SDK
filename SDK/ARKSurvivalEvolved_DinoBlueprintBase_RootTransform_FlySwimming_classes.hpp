#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_RootTransform_FlySwimming_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C
// 0x0FC8 (0x1308 - 0x0340)
class UDinoBlueprintBase_RootTransform_FlySwimming_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_49EF2CFD402528B79E45FAAC4EF23396;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_51B562EE482DC30441F8E7B043355C26;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EB37DD4A43B31DFA614440806971D9EE;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FBEE855B415B7265324D039D403805B0;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3DEE50A848CED8939C4DCCAFC72B91B8;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EF2D31724B4819613B81B4AAEB35C276;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_101AF6D04D884A3B02C9748C2481D4E7;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F2F514A84CA3CBA43DEE958F5712CB60;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_BE4F24F543F7DBF36C6EF5889C49A4B1;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_22322985437229C879943691B155FCD9;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5F43FFD3499ED85A23A1FFA78E04A957;// 0x05D0(0x0060)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_7AF63F1E4723F7AA9E1F51B49E8AE934;// 0x0630(0x00F8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_816D38F04E9C17E7159833AC5AE2EF3F;// 0x0728(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_37AD8C90408E0AF0566D07BC5BD00787;// 0x0768(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A945761A4C80BD7D3C37D5B6DB33AB77;// 0x0790(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CF2FF6984CEDF89B6C7F68802665DC28;// 0x07B8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A7761CAF45659307D9913B8A24C743A9;// 0x0818(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_669C280841D41C1FC0A24C86BA8201C6;// 0x0848(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67A12CFA4053AF2AD0FAA7A6ED4B2834;// 0x08A8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ABC812954F227388E8B4048A8C6D4670;// 0x08D8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3317681C4559FFF37BE4EA8EF95B36E3;// 0x0938(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3F9520C1464F7EC73D0A98B3226B7541;// 0x0998(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E76A3B1549A4521B7A8F6FAE69FCDC2B;// 0x09C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A923FA434C075D22FB36DD9D00C41866;// 0x09F8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_87E948CE4893E3577206888C93B99435;// 0x0A58(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_20C64C8D433BB418F5D108BDFCBA37C1;// 0x0A88(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D5B1BA144A96932AC79CF0AE63804B9E;// 0x0AE8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_68D8FEF04EDA674556834CA20723A327;// 0x0B18(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_7F7388344A8A6CDB529C03B1320AF731;      // 0x0B78(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A67A024F407CCF6B465122807EB9606D;      // 0x0BB0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_4A723B924A5941B474BE73ADE8ED0AA7;      // 0x0BE8(0x0038)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_23ECE76D4B025911989E959F10F67552;// 0x0C20(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DE7015748F78613F26BE98B7D914634;// 0x0C70(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B54E4F14AD8888C969B1E8181D52F7F;// 0x0CA0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E426A9854594C2CD24CCDA9DA0EFEBE8;// 0x0CD0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_ABF804314ACA4E6E72747D9A071CD294;// 0x0D30(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8BCC614F47B452884B8B1BADD24B8CD1;// 0x0D90(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B1FAB85E4AEB353DA93DD7B02EAD0F39;// 0x0DC0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9F5F7AB14786834EACED649D215F2D1E;// 0x0E20(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_63779C77421C07F25B1BA8AF35606FD1;// 0x0E50(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F300667E430870D8F34528B6A323E713;// 0x0EB0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4829CC954EA2D5396C3EE889D909204A;// 0x0F10(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_341104534750D3A825C98BBEF4738FD3;// 0x0F40(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_800C2CCF4EC33CC69F5BAABB19A76BBB;// 0x0F70(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DBC60B3E4BE4EDE0B96687833E13D927;// 0x0FD0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F9129A346EEFE2480D340A833019502;// 0x1030(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91BB99114991CF34109D97B70EEF169D;// 0x1060(0x0030)
	bool                                               bIsMoving;                                                // 0x1090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x1091(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x1094(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x10A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x10A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x10A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x10B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x10B5(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x10B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFlying;                                                // 0x10BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x10BD(0x0003) MISSED OFFSET
	struct UObject_FTransform                          RootOffsetTransform;                                      // 0x10C0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMovementSpeed;                                     // 0x10F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x10F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x10F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x10FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x1100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x1104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x1108(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x1109(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x110A(0x0002) MISSED OFFSET
	float                                              MinimumMovementSpeedFlying;                               // 0x110C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x1110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x1111(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x1112(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x1113(0x0001) MISSED OFFSET
	float                                              MinTurnRateForTurnAnimation;                              // 0x1114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningEnabledBlendTime;                                  // 0x1118(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x111C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x1120(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendIn;                                        // 0x1124(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FlyingMoveBlendOut;                                       // 0x1128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x112C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x1130(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x1131(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x1132(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFlyingOffset;                                         // 0x1133(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     FlyingOffset;                                             // 0x1134(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CurrentFlyingOffset;                                      // 0x1140(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     LandedOffset;                                             // 0x114C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlinkBlend;                                               // 0x1158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x115C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMounted;                                               // 0x115D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMounted;                                              // 0x115E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x115F(0x0001) MISSED OFFSET
	float                                              AimOffsetYawScale;                                        // 0x1160(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetPitchScale;                                      // 0x1164(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x1168(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x1169(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSwimming;                                               // 0x116A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x116B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinimumMovementSpeedSwimming;                             // 0x116C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x1170(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x1174(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1178(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x4];                                       // 0x117C(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x1180(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x1188(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1190(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1191(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1192(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x1193(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1194(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x1195(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1196(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x9];                                       // 0x1197(0x0009) MISSED OFFSET
	struct UObject_FTransform                          CallFunc_GetAimOffsetsTransform_RootRotOffsetTransform;   // 0x11A0(0x0030) (Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsetsTransform_TheRootYawSpeed;          // 0x11D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsetsTransform_RootLocOffset;            // 0x11D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsetsTransform_ReturnValue;              // 0x11E0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x11EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x11F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x11F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x11F8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x11FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1200(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1204(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x1205(0x0003) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x1208(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x1210(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x4];                                       // 0x1214(0x0004) MISSED OFFSET
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x1218(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1220(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1221(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x1222(0x0002) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1224(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1228(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1230(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x1234(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1235(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x1236(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1237(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x1238(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1239(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x123C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x1248(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x1254(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue;                           // 0x1258(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_VInterpTo_ReturnValue2;                          // 0x1264(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x1270(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1271(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x1272(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1274(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x1278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x1279(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x127C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x1280(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x1284(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x1288(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x128C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x1290(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x1294(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x1298(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x4];                                       // 0x129C(0x0004) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue2;                    // 0x12A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x12A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x12B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x12B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x12B9(0x0007) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue2;               // 0x12C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent2;         // 0x12C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x12D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x12D1(0x0007) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x12D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x12E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x12E1(0x0003) MISSED OFFSET
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x12E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x12E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x12E9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x12EA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x12EB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Select_ReturnValue;                                // 0x12EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select_CmpSuccess;                                 // 0x12F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x12F1(0x0003) MISSED OFFSET
	float                                              K2Node_Select_ReturnValue2;                               // 0x12F4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_Select2_CmpSuccess;                                // 0x12F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x12F9(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x12FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1300(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x1301(0x0003) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x1304(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_RootTransform_FlySwimming.DinoBlueprintBase_RootTransform_FlySwimming_C");
		return ptr;
	}


	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3138();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_SequencePlayer_4073();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_ModifyBone_624();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3137();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_RotationOffsetBlendSpace_180();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3136();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3135();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_SequencePlayer_4071();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3134();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3133();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_SequencePlayer_4070();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_SequencePlayer_4069();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3132();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_SequencePlayer_4068();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3131();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3130();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_ApplyAdditive_252();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3129();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3128();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3127();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_SequencePlayer_4063();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3126();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3125();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_SequencePlayer_4062();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_SequencePlayer_4061();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3124();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming_AnimGraphNode_BlendListByBool_3123();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_DinoBlueprintBase_RootTransform_FlySwimming(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
