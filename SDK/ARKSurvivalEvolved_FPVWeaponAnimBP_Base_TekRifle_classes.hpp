#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FPVWeaponAnimBP_Base_TekRifle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_TekRifle.FPVWeaponAnimBP_Base_TekRifle_C
// 0x1008 (0x1348 - 0x0340)
class UFPVWeaponAnimBP_Base_TekRifle_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_AD2A7AE14836D769EA4AF683D832DDAB;      // 0x0340(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A1AB282048B914A10FB9DDAF967ED8B7;      // 0x0368(0x0038)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DC44F5E845DFD73C1389FE94B7A71EFE;// 0x03A0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_AD10F2AC437E82983C7439A4B0652571;// 0x03B8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2AA823AD451899D6EA91798A02359BF0;// 0x03D0(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0069BFBC47E4D187372ADB9BFFEDBD06;// 0x03E8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B0FA025140BA19FD2CBFE3AAFAF1E567;// 0x0400(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ADB1F3DE4E8C9F6D101D6B8AD06D72A1;// 0x0418(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_04D9EBB64C2F072BEBE1B7B056FDBC20;// 0x0430(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_55DAEE3A41310224418F3983E6E9E270;// 0x0448(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_50A5C10D4B314E95717B81BDD2F0D0F3;// 0x0460(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_761CDF134F4F5E3C8C7404A45191885C;// 0x0478(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_866F49A3421962A5C09C97A681041A05;// 0x0490(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_924717C24169FAD8089247B0E18E910A;// 0x04A8(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0455C349400D86461925B5BAC6AEA50F;// 0x04C0(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A1582EC047EA3CD593EE69A2CC9D3B61;// 0x04D8(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_27A67CBC4BC710D9F838BFBC912EFA4D;// 0x0508(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3CC4A95A43FFF919CB3400B07DE09927;// 0x0530(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_55068A4F432EED76E51454A61AAEEA48;// 0x0560(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_020D344E4A4936B2018041A189184FED;// 0x0588(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_069BDC4E4B6D21B1EDD9B283BB33EF18;// 0x05B8(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_EFDA0DAC4062633DAD1A25813831D04C;// 0x0618(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_334EF601444A72F6C8C7A38E4F7289B6;// 0x0640(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0668(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FCD759E24C5C705A7059228D34AC97AC;// 0x0670(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DE99DDBA4836960244AB30848A471DF3;// 0x0720(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6F5B4160451997A10AF17F80E22A7FB9;// 0x0750(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6D91024B48FED7743D83C5A439C1D1AB;// 0x07B0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5CF912C648828C27AC47558D6F57561B;// 0x07E0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_809142104232347F828069B209D7C269;// 0x0840(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_ADB33106413DEA4A5319DABCA9839C28;// 0x0870(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9128A38141C4A787193A8F91ECA9EF24;// 0x0898(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2C6634AE4B8B9B63DF4D8BAB1E6FC6B3;// 0x08C8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_5000ACE6413662228F2F50BC9A5CC599;// 0x08F0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A7D95C0E4CFDD49E34172F96700726A6;// 0x0950(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3DE717AA4CF1D205BDB90284BD3579A5;// 0x0980(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2756B7F04AFB5A7A05AE14835A2DCCE7;// 0x09B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BCD0F05747470D0C82FCEBBBB7207745;// 0x09D8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7FBC02B54313662343E3E7B0714ABD7D;// 0x0A08(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_0FD22A6241236DAF6BA21E96DAD58E56;// 0x0A68(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_434ABCAC4F30592ADB328AB5AA652695;// 0x0A98(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6E0C38C149834F17F5DAB1A8C51684C7;// 0x0AF8(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_3BD41EAF4D71960B6E2C03A1A02030C2;// 0x0B20(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0B48(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_EE005AB54FAEB2E950AB3FB56F293456;// 0x0B50(0x00B0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A0926824E06630F0940FABBE05EAB07;// 0x0C00(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E10C5B6247836870E18B91804111F039;// 0x0C30(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_338AFDEA4929BC32F0A95CA2C274B843;// 0x0C90(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AD6578BE41CFD5A7391309A0A79D6A52;// 0x0CC0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AD9CB92C4C8F873B4D93018E35C6220F;// 0x0D20(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_69B40A754805C58F004329AD06275747;// 0x0D50(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D8EA6BAE4A6D661F136249A6E6548DA7;// 0x0D78(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_EFEFBF8A45FFB25B2B260FB306DD2AED;// 0x0DD8(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_31A5DCF94F7B6EE76530C7A47ECD7DCD;// 0x0E58(0x0018)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C410AB744B5A1B6E332ED29F8C6AC6C9;// 0x0E70(0x0018)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3894432743D091DB392374AF341DACD0;// 0x0E88(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2266FF034131065A93F5FCA1EBFB0349;// 0x0EB8(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_660B67FF497C28A3E3DF04BF1F36D15A;// 0x0EE0(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B3D9626F4F3557FCA722BF82996C79C7;// 0x0F10(0x0028)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_A095648E4AF5654FA03EB6A320E47AE7;// 0x0F38(0x0060)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0F98(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_3FF8326C4B3D440B25E3509F10F1F359;// 0x0FA0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AC38C70F447FAB1767F733B9FA8E9F6C;// 0x1050(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A99C51A34C2B6D972DAA90894805244C;// 0x1078(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_BB51624F484964AFA6A08F951934465E;// 0x10A0(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_AFB22DA44465C1A11DF0769CCD643E9C;// 0x1150(0x0028)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_6CD09323455D9EF4293DD0A02F2CB150;// 0x1178(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B57596F34D4454F9094926AE1C026080;      // 0x11A0(0x0038)
	bool                                               IsRunning;                                                // 0x11D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsTargeting;                                              // 0x11D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsMoving;                                                // 0x11DA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseMoving;                                               // 0x11DB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MovementAnimRate;                                         // 0x11DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x11E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x11E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x6];                                       // 0x11E2(0x0006) MISSED OFFSET
	double                                             LastSwimmingTime;                                         // 0x11E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseInventory;                                            // 0x11F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInventory;                                             // 0x11F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x11F2(0x0002) MISSED OFFSET
	struct FVector                                     DefaultTranslation;                                       // 0x11F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseNoClipAmmoIdle;                                       // 0x1200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bHasClipAmmo;                                             // 0x1201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUsingShield;                                           // 0x1202(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x1203(0x0001) MISSED OFFSET
	float                                              UsingShieldWeight;                                        // 0x1204(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsBlockingWithShield;                                    // 0x1208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x1209(0x0003) MISSED OFFSET
	struct FVector                                     BlockingShieldTranslation;                                // 0x120C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BlockingShieldWeight;                                     // 0x1218(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    BlockingShieldRotation;                                   // 0x121C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsOverheated;                                            // 0x1228(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x1229(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x122A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x122B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x122C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x122D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x122E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x122F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x1230(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x1231(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x1232(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x1233(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x1234(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x1235(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x1236(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x1237(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x1238(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x1239(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x123A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue11;                       // 0x123B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue12;                       // 0x123C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x123D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue13;                       // 0x123E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x123F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x1240(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1241(0x0003) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x1244(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AActor*                                      CallFunc_GetOwningActor_ReturnValue;                      // 0x1248(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterWeapon*                              K2Node_DynamicCast_AsShooterWeapon;                       // 0x1250(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x1258(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x1259(0x0007) MISSED OFFSET
	class AWeapTekRifle_C*                             K2Node_DynamicCast_AsWeapTekRifle_C;                      // 0x1260(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x1268(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetIs_Overheated_bRetOverheated;                 // 0x1269(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x126A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x5];                                       // 0x126B(0x0005) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPawnOwner_ReturnValue;                        // 0x1270(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x1278(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x1279(0x0007) MISSED OFFSET
	class AShooterCharacter*                           K2Node_DynamicCast_AsShooterCharacter;                    // 0x1280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x1288(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x1289(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVTranslation;// 0x128C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetBlockingShieldOffsets_OutBlockingShieldFPVRotation;// 0x1298(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_GetBlockingShieldOffsets_ReturnValue;            // 0x12A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsBlockingWithShield_ReturnValue;                // 0x12A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsUsingShield_ReturnValue;                       // 0x12A6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x12A7(0x0001) MISSED OFFSET
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x12A8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Conv_RotatorToVector_ReturnValue;                // 0x12B4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x12C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsTargeting_ReturnValue;                         // 0x12C4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x12C5(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetCurrentAcceleration_ReturnValue;              // 0x12C8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x12D4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x12E0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X;                                   // 0x12E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x12E8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x12EC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x12F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x12F1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x12F2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x12F3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x12F4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x12FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x1300(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x1304(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x1305(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x1308(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue14;                       // 0x130C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x130D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x130E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0x130F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue15;                       // 0x1310(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x7];                                       // 0x1311(0x0007) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x1318(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x1320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x1328(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x132C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue14;                        // 0x132D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x132E(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue;                           // 0x1330(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue15;                        // 0x1334(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x1335(0x0003) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue2;                          // 0x1338(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue16;                       // 0x133C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue16;                        // 0x133D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x133E(0x0002) MISSED OFFSET
	float                                              CallFunc_FInterpTo_ReturnValue3;                          // 0x1340(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FInterpTo_ReturnValue4;                          // 0x1344(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass FPVWeaponAnimBP_Base_TekRifle.FPVWeaponAnimBP_Base_TekRifle_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1942();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1941();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1940();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1939();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1938();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1937();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1936();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1935();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1934();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1933();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1932();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1931();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1930();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_BlendListByBool_2496();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_ModifyBone_550();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_SequencePlayer_3448();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_BlendListByBool_2497();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_SequencePlayer_3449();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_BlendListByBool_2498();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_BlendListByBool_2495();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_BlendListByBool_2491();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_BlendListByBool_2492();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_ModifyBone_549();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_SequencePlayer_3441();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_BlendListByBool_2493();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_SequencePlayer_3442();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_BlendListByBool_2494();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_LayeredBoneBlend_120();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1929();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_TransitionResult_1928();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_ModifyBone_548();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle_AnimGraphNode_ModifyBone_547();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_FPVWeaponAnimBP_Base_TekRifle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
