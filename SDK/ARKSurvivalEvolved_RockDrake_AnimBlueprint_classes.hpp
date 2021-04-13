#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RockDrake_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass RockDrake_AnimBlueprint.RockDrake_AnimBlueprint_C
// 0x28CC (0x2C0C - 0x0340)
class URockDrake_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_BAF42AAB4009C6185AC9C8A18DB1AB54;// 0x0340(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_8B6A078E4325B5920CE023B4F64469BA;// 0x0370(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_A3BE92D249803B91849CF884028C11AD;// 0x0420(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D7ED038340A0E03FE6F79497603DD66B;      // 0x0448(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_916E22944346A80713965AA4FCF0D930;      // 0x0480(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_2E5EB803470B1EA1E44E9EB0D435B99D;      // 0x04B8(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E3EBC4944A1DF7EE2CB2FC8191B705B0;// 0x04F0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_16FBB6954AECED185D0704A0623E2052;// 0x0550(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_6D5BC34A47FE555A760CCCB558337B87;// 0x0590(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9AFA18CC457E6F3219FA89A197217F09;// 0x05B8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A387B02B49A124589D92BC8ABA956A80;// 0x05E0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EB3848D4437240B778A19198297AC905;// 0x0640(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_106F42A443F965C20C9D6C9D8B85EAEB;// 0x06A0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9D5F1339445DDEEEE8B071B5D3D3EB65;// 0x0700(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_94593301446F5E6986F4BA994571B4D3;// 0x0760(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9319C46148D3DF6FCCDFBA89CBE1831C;// 0x07C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A5ED6A6F4888D8F7CC06539F696BBECF;// 0x0820(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_560C03AB45D0D7F9F98023BE580B1C95;// 0x0880(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_47FA589F425403A0D36AD2BDDC60353A;// 0x08E0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_86CCC7694AA268101E49B08B47382620;// 0x0908(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_68D504BF4A4166A9043213BB259948FF;// 0x0930(0x0028)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0958(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_C0323BA541D57B7A5D2C7781BA423581;// 0x0960(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_501974FA4CA9E3A9907B58B2C5600A29;// 0x0A10(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B9C7BD1544E26E6C32BBA69086A18D41;// 0x0A70(0x0060)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_2F85D9F948B9FB852D94788857A2FABE;// 0x0AD0(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0F8FE21040D6B8E0CAA7FEB6B074A11C;// 0x0B28(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_DC3647284818921423A5319A333D1299;      // 0x0B88(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B1E90875435F3160F18679B0DC89F397;      // 0x0BC0(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_F37C671D40B4A70B57F1BCACFC0C7059;      // 0x0BF8(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_90D31E774312938E699CC2AA884EBCA0;// 0x0C30(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_BBA9E4D34EF3DC2818278FB44B641B91;// 0x0CE8(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0EC9E4E2495B487C4DDB0F8A538CEC6A;// 0x0DA0(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2CC36053471E6C06C31D13AE572AA5F6;// 0x0DF0(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_270B7B3B4E018F93E4EC2682FE05E974;// 0x0E50(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_82C278E544825057D56605A3774A3A4C;// 0x0E78(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7C6F85994A33863B65D47CA849E56F86;// 0x0EB8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_4985962B4DA8C1EB4038E8BD1D39EAEC;// 0x0EE0(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8A4806404AF3A0DA2C96CCA8C01D6E12;// 0x0F08(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_972C36D8485E761CF7AACCA6CB60C315;// 0x0F30(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_85E642AC4B74C1401A2125BE85F2EFF9;// 0x0F90(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3CF811FF4D175E966D8299ADCAA39C60;// 0x0FE0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0E7D6DC742FFA5C09DE75AB85C112323;// 0x1040(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A53AFF814E32093C947543BB09D48551;// 0x1080(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AF6FE703450DDE204A8795A3B5C0D18C;// 0x10A8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_57DCDF504EF41C8BD026BCA50A00127C;// 0x10D0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_74029CC341F845B417C2D5B6FF9DB013;// 0x1130(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_839E51394B3E94DC9E8761A091374B71;// 0x1190(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_53492BC44D994AA816CDEEBB72DC9362;// 0x11F0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_DB31F6F145E755B329FC61A01C1F607A;// 0x1250(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8B5DC2AC4920EBD822976CB6B5AE2BED;// 0x1290(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_D47CF95A41AA46D137A35492C16DFA7C;// 0x12F0(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2EEEE8F54B60C4A6A4BB53B64D0F0D90;// 0x1350(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9DCD8EDD4A3B748D14E0B298A1BB1479;// 0x1378(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2AA5AF414BF6EC14E9C5C584E1636BEE;// 0x13A0(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FCF5077849C001714E649994BA5907FD;// 0x13C8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7A802C4845DD51603648F495B1862658;// 0x1428(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E171E8464BD0E8D483C1FC9F7EF34C3C;// 0x1488(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BA60F27A493FBCE45A16559107F675E3;// 0x14E8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_783B5B9B48D88B8618B399874B0EAD0E;// 0x1548(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DB5D888847BC74A5CAE61DA71953D638;// 0x15A8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_96CE175545102D584DCDCDA8A3D413B6;// 0x1608(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_63583B5E4A740D8299CE8F8B76E18187;// 0x1668(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_58D90E1F4B4A7351E14B83A2FE8F623B;// 0x16B8(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9AC777B547014CEA80451FB01CDC01A2;// 0x1708(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_210A7D0543D24C3EC17AA695B5DCCC04;// 0x1768(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_815BAB6C4997C18E2DC22B8EBECF85AB;// 0x17A8(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_62F5C0704AFEB2A570BCA991E6D4FDB1;// 0x17D0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_B7FC58B142A890B1B92C41A2EA48E309;// 0x17F8(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C05B5F4B47045B377CC233BE09E6F21E;// 0x1838(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C2E7F3C8496C99E69E86DC929F450AD6;// 0x1860(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_66D328F24680D5ABA048D99ADAF99981;// 0x1890(0x0030)
	struct FAnimNode_Root                              AnimGraphNode_Root_1B3F961C46A9A4BD9FD938BA5CC2366E;      // 0x18C0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0089C9A455C02ECF47FCC87773317F1;// 0x18E8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B8D5080840EF04EE21971694F6BF18C7;// 0x1918(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1B49D5F14C4221F4C7C344B289BA5FFE;// 0x1948(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AED937B04E09EE14108A85B4C2BCCB72;// 0x1978(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DAD1C8B416ED7FAB716ABAB0BD7F103;// 0x19A8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A42148844C2E2DF0CC9E61859C4786D3;// 0x19D8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_710DD50645594F5CC1906089F33E75FB;// 0x1A08(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_20E88D2543FC9ADE0D301F97C10F1A0A;// 0x1AE8(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_32F2265D49576C75F1333C895541445E;// 0x1BC8(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_9A947A994E349143AB546B8947C32A6B;// 0x1BF8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E5391E554BD660C635DD4091EEB5B1CD;// 0x1C68(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F21C9AAE42DF240A5417C5ACF7E674F8;// 0x1C98(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_318724E8452E7468855C059B0F6402B9;// 0x1CC8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D040A9BB42348118B8EA5E852853F8D8;// 0x1CF8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F4586EBD4F346936CCB5279A082D6601;// 0x1D28(0x0030)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_68D6BB12490B27CCBB084BA14D3D9F55;// 0x1D58(0x00F8)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_B1AA37264868F1CD1BB6BCB790E6FE85;// 0x1E50(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6A59EE27461F1FF750F412ADA88D00D8;// 0x1EC0(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_E51E9F8E4548F2D88507C6B1BCCCFAB7;// 0x1EF0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A16D5C424577DB93CE392E9591ECF242;// 0x1FD0(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_E906335743B6C228528C4B8D5645B3C7;// 0x2010(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B54E42CD44CA284E20E1FCA6932F95E7;// 0x2038(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_49EBC14E47B08FBA0D1A779158A417D6;// 0x2098(0x0050)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B0BE2F1A4476DB815EE7169DE59EDCA8;// 0x20E8(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B675D58B4DD4500D34A92DB14B7DC78D;// 0x2118(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8273B90A410B74B3C267138A8D873D84;// 0x2140(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_D4F8B415451003CA7951A7B15A5A12BA;// 0x21A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_47E11205417C8EDE769D539B8FC93961;// 0x21D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_528FAFB04FC73EFDF9AF01B92FC2D689;// 0x2200(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_34677D8F40031400013289808B765B70;// 0x2230(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2822C9C44B4BBC451A145AA534E724DA;// 0x2260(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_08E4F50B4A05FF90B14FB498AB33007B;// 0x2290(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9023FB6049F7F3567691518471BA0E3B;// 0x22C0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E428A6634EEFA62E39A56BBB5174CA79;// 0x22F0(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A7D08E754916A5C691851B9CABD548F6;// 0x2320(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_88BAA8A44ABC97B78614D39A89B6C6B1;// 0x2380(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_A0AF01914B9CEAA9FD6989B1E4E7FCF1;// 0x23C0(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D3DD11BE43760BB6F9F302A2FD04EBF1;// 0x23E8(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6385247B4D1C04E919BB05A1408BC452;// 0x2410(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_EAA1BAED4693199A009A07BE2393F878;// 0x2470(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9EF7FF3847BBF0D80DFF3A809B90A056;// 0x2550(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5883B39D4AAB44A5E0D5E6B8634B6BD0;// 0x2580(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9937146849F55FDDAA249DB50B307B56;// 0x25B0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5DA3AB2D421C2859F718DF9B9A80C8AA;// 0x25E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F82AB50B4C098E591ADD6AB943F092A9;// 0x2610(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BD0104FF4ACF964BE86B87B62B96371B;// 0x2640(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B23F873247CF5241276B42A581206A71;// 0x2670(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F3D66562496DBC8F81AA0AA46E2891AC;// 0x26A0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_95ED572A4710A186941119842C3A75AD;// 0x26D0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EDD5F97C4D08B0CE439E50A5BFCEB724;// 0x2700(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_A88FC99A4B5E0DE6B92081BCC36FBF4F;// 0x2730(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E8ECA5454B2621DEA0DD6CA054855A3C;// 0x2760(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1BF546CE450D71520D94E7BD6CF7686F;// 0x2790(0x0030)
	bool                                               bIsMoving;                                                // 0x27C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x27C1(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x27C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x27D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x27D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x27D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x27E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x27E5(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x27E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x27EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x27ED(0x0003) MISSED OFFSET
	float                                              MaxMovementAnimRate;                                      // 0x27F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x27F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x27F5(0x0003) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x27F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x27FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x2800(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x2801(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x2802(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x1];                                       // 0x2803(0x0001) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x2804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x2808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x280C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x2810(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x2814(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x2815(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x2816(0x0002) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x2818(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x281C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x2820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x2824(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x2828(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x282C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x2830(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x2831(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x2832(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x2833(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x2834(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x2840(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x2844(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x2845(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x2846(0x0002) MISSED OFFSET
	float                                              AlignGroundAlpha;                                         // 0x2848(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x284C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x284D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x2];                                       // 0x284E(0x0002) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x2850(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAlpha;                                                  // 0x2854(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x2858(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x285C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x2860(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x2864(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x2865(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x2866(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x1];                                       // 0x2867(0x0001) MISSED OFFSET
	float                                              AimOffsetPitchScale;                                      // 0x2868(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x286C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSleepingEnableIK;                                        // 0x2870(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x2871(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Climber_Attached;                                         // 0x2878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_DinoClimberState>                    ClimberState;                                             // 0x2880(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<E_DinoClimberState_RockDrake>          ClimberState_RockDrake;                                   // 0x2881(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      MaxIsClimbingStateIndex;                                  // 0x2882(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x1];                                       // 0x2883(0x0001) MISSED OFFSET
	float                                              StartClimbingBlendTime;                                   // 0x2884(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopClimbingBlendTime;                                    // 0x2888(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SeekingBlendTime;                                         // 0x288C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentForwardClimbVelocityRatio;                         // 0x2890(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardVelocityRatioToStopSkidAnim;                       // 0x2894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityRatioAbsMax;                                      // 0x2898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClimbingTurnDirection;                                    // 0x289C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingTurnBlendTime_Move;                               // 0x28A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingTurnBlendTime_Run;                                // 0x28A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiddingBlendTime;                                        // 0x28A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbRunBlendTime_In;                                     // 0x28AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbRunBlendTime_Out;                                    // 0x28B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayClimbingAnimsWhileSeeking_Idle;                      // 0x28B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayClimbingAnimsWhileSeeking_Move;                      // 0x28B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayClimbingAnimsWhileSeeking_Run;                       // 0x28B6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCurrentlyUsingAdditiveClimbingBlendSpaces;             // 0x28B7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ClimbingBlendspace_Axes_Front;                            // 0x28B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ClimbingBlendspace_Axes_Back;                             // 0x28C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimberForceDisableIK;                                   // 0x28C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x28C9(0x0003) MISSED OFFSET
	float                                              MovementAnimRate_Climbing;                                // 0x28CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate_Climbing;                         // 0x28D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Glide_X;                                                  // 0x28D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Glide_Y;                                                  // 0x28D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRockDrakeAlerted;                                      // 0x28DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x28DD(0x0003) MISSED OFFSET
	float                                              AlertBlendTime;                                           // 0x28E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRockDrakeClimbing;                                     // 0x28E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x3];                                       // 0x28E5(0x0003) MISSED OFFSET
	float                                              RequiredRotationSpeedForGlideTurnAnims;                   // 0x28E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlidingBlendTime;                                         // 0x28EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimberSkidding;                                       // 0x28F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSkiddingBlendspace;                                   // 0x28F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x28F2(0x0002) MISSED OFFSET
	float                                              SkiddingRatio_Forward;                                    // 0x28F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiddingRatio_Right;                                      // 0x28F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxAbsSkiddingVelocity;                                   // 0x28FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreviousGlidingPitch;                                     // 0x2900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlideBlendSpacePitchDifferenceThreshold;                  // 0x2904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForceFullGlideDiveBelowPitch;                             // 0x2908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GlideBlendSpaceDifferenceDivisor;                         // 0x290C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimberCanPlaySeekAnim;                                  // 0x2910(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsStartingToClimb;                                       // 0x2911(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x2912(0x0002) MISSED OFFSET
	float                                              TimeAfterClimbStartToUseStartAnims;                       // 0x2914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2918(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x2924(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x2925(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x2926(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x2927(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue;                    // 0x2928(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x2929(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x292A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x292B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x292C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x292D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x2];                                       // 0x292E(0x0002) MISSED OFFSET
	float                                              CallFunc_BreakVector2D_X;                                 // 0x2930(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x2934(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X2;                                // 0x2938(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y2;                                // 0x293C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x2940(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x2944(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x2948(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanRockDrakeUseAimOffsets_result;                // 0x2949(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x294A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x294B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x294C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x2950(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x2951(0x0007) MISSED OFFSET
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x2958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ARockDrake_Character_BP_C*                   K2Node_DynamicCast_AsRockDrake_Character_BP_C;            // 0x2960(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x2968(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x2969(0x0003) MISSED OFFSET
	float                                              CallFunc_BP_GetMaxSpeedModifier_ReturnValue;              // 0x296C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Climber_Right_Vector_right;                  // 0x2970(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetClimberVelocityAlongNormal_velocity;          // 0x297C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Climber_Forward_Vector_forward;              // 0x2980(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_CanClimberSkid_result;                           // 0x298C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x3];                                       // 0x298D(0x0003) MISSED OFFSET
	float                                              CallFunc_GetClimberVelocityAlongNormal_velocity2;         // 0x2990(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x2994(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x2995(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x2996(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x2997(0x0001) MISSED OFFSET
	struct FVector2D                                   CallFunc_GetClimbingIK_BlendspaceAxes_Back_axes;          // 0x2998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x29A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x3];                                       // 0x29A1(0x0003) MISSED OFFSET
	struct FVector2D                                   CallFunc_GetClimbingIK_BlendspaceAxes_Front_axes;         // 0x29A4(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Climber_Moving_on_Surface_result;             // 0x29AC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x29AD(0x0003) MISSED OFFSET
	float                                              CallFunc_Get_CurrentClimbingVelocityMax_velocity;         // 0x29B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_GetClimbingTurnDirection_turnDir;                // 0x29B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Climber_Forward_Vector_forward2;             // 0x29B8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x29C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x29C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_ClimberClimbing_result;                       // 0x29CC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Is_Climber_Moving_on_Surface_result2;            // 0x29CD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x29CE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsRunning_ReturnValue;                           // 0x29CF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x29D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x29D1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x29D2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x29D3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x29D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x29D5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsFirstPerson_ReturnValue;                       // 0x29D6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x1];                                       // 0x29D7(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x29D8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_Get_Current_Climber_LookRotation_lookRot;        // 0x29E4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsClimberClimbing_Simple_result;                 // 0x29F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x29F1(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_NormalizedDeltaRotator_ReturnValue;              // 0x29F4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x2A00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x2A04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x2A08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue2;                   // 0x2A0C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x2A18(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x2A1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Climber_Up_Vector_up;                        // 0x2A20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Get_Climber_Right_Vector_right2;                 // 0x2A2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAngleDeltaBetweenVectors_theta;               // 0x2A38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAngleDeltaBetweenVectors_theta2;              // 0x2A3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x2A40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2A4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x2A50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x2A58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x2A5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2A60(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue3;                   // 0x2A6C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue2;                   // 0x2A78(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2A7C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x2A7D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x2A7E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x1];                                       // 0x2A7F(0x0001) MISSED OFFSET
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x2A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x2A88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2A90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x2A91(0x0003) MISSED OFFSET
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x2A94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue4;                  // 0x2A98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue6;                // 0x2A9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x2A9D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue7;                // 0x2A9E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x2A9F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue8;                // 0x2AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x2AA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2AA2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue9;                // 0x2AA3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue10;               // 0x2AA4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x2AA5(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x2AA8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x2AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x2AB8(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x2AC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Pitch2;                                 // 0x2AD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw2;                                   // 0x2AD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll2;                                  // 0x2AD8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue5;                  // 0x2ADC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue6;                  // 0x2AE0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x2AE4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x2AE5(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x2AE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x2AEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x2AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x2AF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x2];                                       // 0x2AF2(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x2AF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x2AF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x2AF9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x2AFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x2B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue8;                 // 0x2B01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x6];                                       // 0x2B02(0x0006) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2B08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x2B10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x2B14(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x2B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x2B20(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x2B24(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x2B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x2B29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2B2A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x2B2B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x2B2C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x3];                                       // 0x2B2D(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2B30(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2B34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x2B38(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x2B3C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2B40(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x2B44(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2B48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x2B49(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x2];                                       // 0x2B4A(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x2B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x2B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x2B51(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x2B54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x2B58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x2B5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x2B60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x2B64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue9;                          // 0x2B68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x2B69(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x2B6C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x2B70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x2B71(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x2B74(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0x2B78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2B79(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x2B7C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x2B80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x2B84(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x2B88(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x2B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x4];                                       // 0x2B9C(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x2BA0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x2BB0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue9;                // 0x2BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue10;               // 0x2BB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue5;                     // 0x2BBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue6;                     // 0x2BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue7;                             // 0x2BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue8;                             // 0x2BC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x4];                                       // 0x2BCC(0x0004) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue2;                 // 0x2BD0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue2;                      // 0x2BE0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue11;               // 0x2BF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue9;                             // 0x2BF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue12;               // 0x2BF8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue7;                  // 0x2BFC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue8;                  // 0x2C00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue10;                            // 0x2C04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue11;                            // 0x2C08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RockDrake_AnimBlueprint.RockDrake_AnimBlueprint_C");
		return ptr;
	}


	void CanRockDrakeUseAimOffsets(bool* Result);
	void UpdateRockDrake(class ARockDrake_Character_BP_C* DrakeRef, float YawTurnRate);
	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_ModifyBone_540();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2599();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2598();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2597();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2596();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2595();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2594();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2593();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2592();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2591();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_ModifyBone_539();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2590();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2589();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2588();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_GroundBones_138();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_GroundBones_137();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_ApplyAdditive_188();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2587();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2586();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2585();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2584();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2583();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2582();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByInt_36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2581();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByInt_35();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2600();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2579();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2578();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2577();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2576();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2575();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2574();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2573();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3488();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_154();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_153();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByEnum_30();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3482();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3481();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3480();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3479();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3478();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_152();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByEnum_29();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_152();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2572();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2571();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3474();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3473();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3472();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3471();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3470();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3469();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3468();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2570();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendListByBool_2569();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_151();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3466();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3465();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3464();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3463();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3462();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3461();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3460();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3459();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3458();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3457();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3456();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RockDrake_AnimBlueprint_AnimGraphNode_SequencePlayer_3455();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_RockDrake_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
