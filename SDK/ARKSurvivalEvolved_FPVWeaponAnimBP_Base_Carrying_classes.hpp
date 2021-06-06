#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVWeaponAnimBP_Base_Carrying_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C
// 0x158E (0x18CE - 0x0340)
class UFPVWeaponAnimBP_Base_Carrying_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_19BF97FE4F2037E9A85A04BA8B73DA51;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_40B25FDE460923C5133DBFB2EEA00BE4;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4A8B14C47696FF6C966698FF1B14DC7;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_80BFA98C4CD37EBCF07EEC857A2229F5;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_62FC01B340CC6EB1F23009A48B4FD947;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_46D3843C4621199ADE23558F65ACE18F;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BE835BC843858304B80DA2AE91A5B5EC;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A8BAFD0F4689B5C75E31BE8B32609E6F;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A9BC0A3B4ACD86AAFD12629794C19556;// 0x0430(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B4D5259D4046E3EFE9C84AB22BFE3BE1;// 0x0448(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0FFA32754FA9FDF2EF7426873DA0450A;// 0x0460(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_21BF806641A634D5BB7F368E7FA38196;// 0x0478(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_813EA40A4B8251936C4FE79168ADEB65;// 0x0490(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0BFB979A4DB67763FE1CC8B92A17CADA;// 0x04A8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_54A95F764D3BAFB93680BA917C771AB8;// 0x04C0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2A2A338C4CE4B62D546F0FA3DDA360AC;// 0x04D8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1477BF7841EF279D1003388FBB329ECC;// 0x04F0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_85BAF15047A69145765D899133E25E02;// 0x0508(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_99D9C49644EA48852297AEA2D40281C5;// 0x0538(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EC98062A42CFB44E63B296A3F0AC98B4;// 0x0560(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_F588247949356C2042905495BC0829F7;// 0x0590(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A3EE772749282E1538A1C1A543D1D045;// 0x05B8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_72B035DB419D031B70F1639320B1D4DF;// 0x05E8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B59474E40DD93306BE4ABAFF4AFCDB8;// 0x0610(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6EF69B0F4DCC2251A8FA678E90DF41BA;// 0x0640(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_36CBA5AB4AC6EAB8ECFFE2B6E5CF0449;// 0x06A0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7DE09197400CEACDFB7B6CA20D40AEFE;// 0x06C8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_95C7347148FB1B6F11679CA755B0B752;// 0x06F0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_036F483C4A9A511DEE455FABB3C23B7E;// 0x07A0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5EA14AC24AF8245ED37A149617880057;// 0x07D0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AC41B6014725ADA314F560BF65F205DE;// 0x0830(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C41C0D734D36C5FDA805E7BFB88775C0;// 0x0860(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_197132FF4AD055A612BB6D9D63B830D8;// 0x08C0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_38A9256F40D689880E2FABB069060C03;// 0x08F0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6509E2784008357F64A3B19B9A4D3DA8;// 0x0918(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_813375E1431F9191973C61BB4F636479;// 0x0948(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0406B80B48F9A6E7E8657AA07C6DD92E;// 0x0970(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_81A15CC84E54C8459C8711856C6269E3;// 0x09A0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6FFD8B234255228660133EB2381AA0A2;// 0x09C8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_522BC11F4E2B278EA24FD599D824CB02;// 0x09F8(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_475AF8B2498CDD7A67CAA28F08E99C0D;// 0x0A58(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_26DD551740710A4E17254CA48156D4B3;// 0x0A80(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0AA8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5A49D7DD46A503D92A9FACBA293C6DEB;// 0x0AB0(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EC63A71448DDCE572EC5749145424A7A;// 0x0B60(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_112DBA794398FC3CB080C8857FFB1808;// 0x0B90(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_852421FF4E2478F77D2960BF2CF90DCE;// 0x0BF0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1F40B06340BA65D36776A0B5CDC6532B;// 0x0C20(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_52CE9827433D59CFA9FF10A04941C704;// 0x0C80(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_54F7FBF94E17654F1B1BA1826D27040F;// 0x0CB0(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_014360974412E94DD08AB882349FAE68;// 0x0CD8(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_62FFCB444B560C23A67C988C6EE3C053;// 0x0D38(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3FCAEB8F4ABAE5363A48FB941FA3BF27;// 0x0DB8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ACBB553A42B383490189C5A052A9C44A;// 0x0DD0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8AC97D8A4266E7547BE3AAB0386F4D69;// 0x0DE8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5BCA4BA54A9BC0DFBF4A70B65C6C0D4D;// 0x0E18(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_54F1B47A466C428C28D03F9C6648A11A;// 0x0E40(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C8FBC4524CC417B8BDF61FB6A43D99CA;// 0x0E70(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_3F83CBA04868301771EFB2A5E9636603;// 0x0E98(0x0060)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0EF8(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9DD181054273F4117C152AA851C4BAD2;// 0x0F00(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6162F47E4AB1E342B647519396FB6E30;// 0x0FB0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_AAFF73214A115E3947B2BD82A795C779;// 0x0FD8(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8750F37449831C164C5B298D622C2A40;// 0x1000(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_6E3026B94872058E04C6D8B5DFB63273;// 0x10B0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_25C535DA4A808209AA648A8879D49323;// 0x10D8(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_85D872E746A18A32ED759F85704E59B3;      // 0x1100(0x0038)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_497C5DA240C8EA3B35CF849139E29B9B;// 0x1138(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B7EF169847FEA230910B959B0A98500C;// 0x1168(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3E53A8E549B88DD572BEEC9DB40F354D;// 0x1198(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_E8BE14FE41238FC8D738CEA07060035E;// 0x11C0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9EA20B4E41810D6AE8627299ED89781A;// 0x11E8(0x0060)
	unsigned char                                      UnknownData02[0x8];                                       // 0x1248(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_9BED136F44C5B6883225AF9DB189B473;// 0x1250(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DA22F20B45A7890C36D0E7B56E58628B;// 0x1300(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9CF77470407DFAADFD58E2BDEEC73124;// 0x1360(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C503F06E4B649E2BE13CADB9DDD628AB;// 0x13C0(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_44AE454743B6C05FDB660FAFD87DBE03;// 0x13F0(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4AF9CFDA4C644B57641E119CD975D707;// 0x1418(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_F9A431AF4A587B845A953DAC70A5E1C1;// 0x1440(0x00B0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_07BD728A49A8F4CE569DB5977DF9EBE8;// 0x14F0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7130B91742F151B70296C0AA56AA31E9;// 0x1530(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_08E3F5A14873C64C5D7E60B3A450022E;// 0x1558(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_499E94B9446860AB75BFEA925D6540B3;// 0x15B8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_D583FC574DDFB18FC133659B12FD631C;// 0x15E8(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6A0300AA49A15172254280A2AE2E3D03;// 0x1610(0x0028)
	unsigned char                                      UnknownData03[0x8];                                       // 0x1638(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FEE21B1944F494E0EAF7A8AEDB68E30C;// 0x1640(0x00B0)
	bool                                               IsRunning;                                                // 0x16F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x16F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x16F2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMoving;                                               // 0x16F3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x16F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x16F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x16F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x6];                                       // 0x16FA(0x0006) MISSED OFFSET
	double                                             LastSwimmingTime;                                         // 0x1700(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInventory;                                            // 0x1708(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInventory;                                             // 0x1709(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x170A(0x0002) MISSED OFFSET
	struct FVector                                     DefaultTranslation;                                       // 0x170C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseNoClipAmmoIdle;                                       // 0x1718(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasClipAmmo;                                             // 0x1719(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingShield;                                           // 0x171A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x171B(0x0001) MISSED OFFSET
	float                                              UsingShieldWeight;                                        // 0x171C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBlockingWithShield;                                    // 0x1720(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1721(0x0003) MISSED OFFSET
	struct FVector                                     BlockingShieldTranslation;                                // 0x1724(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockingShieldWeight;                                     // 0x1730(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BlockingShieldRotation;                                   // 0x1734(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseCarryingAnimation;                                    // 0x1740(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimbing;                                              // 0x1741(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x1742(0x0002) MISSED OFFSET
	float                                              ClimbingRate;                                             // 0x1744(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbAnimSpeedMultiplier;                                 // 0x1748(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxClimbingRate;                                          // 0x174C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsNearLadderTop;                                          // 0x1750(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsDraggingCharacter;                                      // 0x1751(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x1752(0x0002) MISSED OFFSET
	float                                              MaxSwimRate;                                              // 0x1754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimPowerMult;                                            // 0x1758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwimRate;                                                 // 0x175C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingGliderSuit;                                       // 0x1760(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPreventSwimmingAnims;                                    // 0x1761(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1762(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x1763(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x1764(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x1765(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x1766(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1767(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x1768(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1769(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x176A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x176B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x176C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x176D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x176E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x176F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1770(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1771(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x1772(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x1773(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x1774(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x1775(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x2];                                       // 0x1776(0x0002) MISSED OFFSET
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x1778(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue2;                        // 0x177C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0x1780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1781(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x1784(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x1788(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x1789(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x178A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue14;                       // 0x178B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x178C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x1790(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x1798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x17A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x17A1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x17A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x17B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x17B1(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x17B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x17C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x17C1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x2];                                       // 0x17C2(0x0002) MISSED OFFSET
	struct FVector                                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation;// 0x17C4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation;// 0x17D0(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlockingShieldOffsets_ReturnValue;            // 0x17DC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsBlockingWithShield_ReturnValue;                // 0x17DD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsUsingShield_ReturnValue;                       // 0x17DE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsNearTopOfLadder_ReturnValue;                   // 0x17DF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x17E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x17E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x17E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x17EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x17F0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x17F4(0x0004) MISSED OFFSET
	class UAnimInstance*                               CallFunc_GetAnimInstance_ReturnValue;                     // 0x17F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UBaseHumanAnimBP_C*                          K2Node_DynamicCast_AsBaseHumanAnimBP_C;                   // 0x1800(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1808(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x1809(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x180A(0x0002) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x180C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue2;            // 0x1818(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x181C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTargeting_ReturnValue;                         // 0x1828(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1829(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetCurrentAcceleration_ReturnValue;              // 0x182C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x1838(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x1844(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x1848(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x184C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x1850(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x1854(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1855(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x1856(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x1857(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x1858(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x1860(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1864(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x1868(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x1869(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x186C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue15;                       // 0x1870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x3];                                       // 0x1871(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x1874(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x1878(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x1879(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x187A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue16;                       // 0x187B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x4];                                       // 0x187C(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1880(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0x1888(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x1889(0x0007) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1890(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x1898(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x189C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue14;                        // 0x189D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x2];                                       // 0x189E(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x18A0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue15;                        // 0x18A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x18A5(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x18A8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue17;                       // 0x18AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue16;                        // 0x18AD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x2];                                       // 0x18AE(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x18B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue4;                          // 0x18B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x18B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x18BC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x18C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x18C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x18C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue18;                       // 0x18CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue17;                        // 0x18CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_Carrying.FPVWeaponAnimBP_Base_Carrying_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_186();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_185();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_184();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_183();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_182();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_181();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_180();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_179();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_178();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_177();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_176();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_175();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_174();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_173();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_172();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_242();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_70();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_SequencePlayer_297();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_243();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_SequencePlayer_298();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_244();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_239();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_69();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_SequencePlayer_291();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_240();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_SequencePlayer_292();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_241();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_LayeredBoneBlend_42();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_171();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_TransitionResult_170();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_68();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_ModifyBone_67();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_SequencePlayer_287();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_238();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_237();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_236();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_SequencePlayer_285();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying_AnimGraphNode_BlendListByBool_235();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVWeaponAnimBP_Base_Carrying(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
