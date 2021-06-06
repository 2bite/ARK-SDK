#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TheIsland_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TheIsland.TheIsland_C
// 0x0C18 (0x1088 - 0x0470)
class ATheIsland_C : public ALevelScriptActor
{
public:
	bool                                               bIsRaining;                                               // 0x0470(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    RainParticles;                                            // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bInCave;                                                  // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWeatherEnabled;                                          // 0x0481(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsUnderwater;                                            // 0x0482(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0483(0x0005) MISSED OFFSET
	class UParticleSystemComponent*                    UnderwaterParticles;                                      // 0x0488(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsPlayerIndoors;                                         // 0x0490(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRiverWater;                                            // 0x0491(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0492(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    RiverParticles;                                           // 0x0498(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UClass*>                              DefaultRefs;                                              // 0x04A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystem*                             RainVFXTemplate;                                          // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             WaterVFXTemplate;                                         // 0x04B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsInSnowBiome;                                           // 0x04C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x04C1(0x0007) MISSED OFFSET
	class UParticleSystem*                             LastRainVFXTemplate;                                      // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRainEnabled;                                           // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04D1(0x0007) MISSED OFFSET
	TArray<class UClass*>                              ExtraRefs;                                                // 0x04D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                RefCount;                                                 // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04EC(0x0004) MISSED OFFSET
	class UMaterialInterface*                          NullMat;                                                  // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTekCaveDifficulty;                                 // 0x04F8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Temp_int_Loop_Counter_Variable;                           // 0x04FC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue;                          // 0x0500(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0504(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable;                              // 0x0508(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue2;                 // 0x050C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue;              // 0x0510(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              K2Node_Event_DeltaSeconds;                                // 0x0518(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x051C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_RandomInteger_ReturnValue;                       // 0x0528(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchInteger_CmpSuccess;                          // 0x052C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x052D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x052E(0x0002) MISSED OFFSET
	class FString                                      CallFunc_Conv_FloatToString_ReturnValue;                  // 0x0530(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class FString                                      CallFunc_Concat_StrStr_ReturnValue;                       // 0x0540(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller138;                     // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer138;               // 0x0558(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0559(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller137;                     // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer137;               // 0x0568(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable;                        // 0x0569(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x056A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x056B(0x0001) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue3;                 // 0x056C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TArray<float>                                      K2Node_MakeArray_Array;                                   // 0x0570(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller136;                     // 0x0580(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer136;               // 0x0588(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0589(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller135;                     // 0x0590(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer135;               // 0x0598(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0599(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x059A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData11[0x5];                                       // 0x059B(0x0005) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller134;                     // 0x05A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer134;               // 0x05A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData12[0x7];                                       // 0x05A9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller133;                     // 0x05B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer133;               // 0x05B8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData13[0x7];                                       // 0x05B9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller132;                     // 0x05C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer132;               // 0x05C8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData14[0x7];                                       // 0x05C9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller131;                     // 0x05D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer131;               // 0x05D8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;// 0x05D9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData15[0x6];                                       // 0x05DA(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller130;                     // 0x05E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer130;               // 0x05E8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData16[0x7];                                       // 0x05E9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller129;                     // 0x05F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer129;               // 0x05F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData17[0x7];                                       // 0x05F9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller128;                     // 0x0600(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer128;               // 0x0608(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData18[0x7];                                       // 0x0609(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller127;                     // 0x0610(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer127;               // 0x0618(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x7];                                       // 0x0619(0x0007) MISSED OFFSET
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue2;             // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue2;                   // 0x0628(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x0634(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue;             // 0x0635(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue3;                  // 0x0636(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x1];                                       // 0x0637(0x0001) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller126;                     // 0x0638(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer126;               // 0x0640(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x7];                                       // 0x0641(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller125;                     // 0x0648(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer125;               // 0x0650(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x7];                                       // 0x0651(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller124;                     // 0x0658(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer124;               // 0x0660(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x7];                                       // 0x0661(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller123;                     // 0x0668(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer123;               // 0x0670(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x7];                                       // 0x0671(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller122;                     // 0x0678(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer122;               // 0x0680(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x7];                                       // 0x0681(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller121;                     // 0x0688(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer121;               // 0x0690(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x7];                                       // 0x0691(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller120;                     // 0x0698(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer120;               // 0x06A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x7];                                       // 0x06A1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller119;                     // 0x06A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer119;               // 0x06B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x7];                                       // 0x06B1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller118;                     // 0x06B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer118;               // 0x06C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller117;                     // 0x06C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer117;               // 0x06D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x7];                                       // 0x06D1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller116;                     // 0x06D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer116;               // 0x06E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x7];                                       // 0x06E1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller115;                     // 0x06E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer115;               // 0x06F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x7];                                       // 0x06F1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller114;                     // 0x06F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer114;               // 0x0700(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x7];                                       // 0x0701(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller113;                     // 0x0708(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer113;               // 0x0710(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x7];                                       // 0x0711(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller112;                     // 0x0718(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer112;               // 0x0720(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x7];                                       // 0x0721(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller111;                     // 0x0728(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer111;               // 0x0730(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x7];                                       // 0x0731(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller110;                     // 0x0738(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer110;               // 0x0740(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x7];                                       // 0x0741(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller109;                     // 0x0748(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer109;               // 0x0750(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x7];                                       // 0x0751(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller108;                     // 0x0758(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer108;               // 0x0760(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x7];                                       // 0x0761(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller107;                     // 0x0768(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer107;               // 0x0770(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x7];                                       // 0x0771(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller106;                     // 0x0778(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer106;               // 0x0780(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x7];                                       // 0x0781(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller105;                     // 0x0788(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer105;               // 0x0790(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x7];                                       // 0x0791(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller104;                     // 0x0798(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer104;               // 0x07A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x7];                                       // 0x07A1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller103;                     // 0x07A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer103;               // 0x07B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData44[0x7];                                       // 0x07B1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller102;                     // 0x07B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer102;               // 0x07C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData45[0x7];                                       // 0x07C1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller101;                     // 0x07C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer101;               // 0x07D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData46[0x7];                                       // 0x07D1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller100;                     // 0x07D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer100;               // 0x07E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData47[0x7];                                       // 0x07E1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller99;                      // 0x07E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer99;                // 0x07F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData48[0x7];                                       // 0x07F1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller98;                      // 0x07F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer98;                // 0x0800(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData49[0x7];                                       // 0x0801(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller97;                      // 0x0808(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer97;                // 0x0810(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData50[0x7];                                       // 0x0811(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller96;                      // 0x0818(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer96;                // 0x0820(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData51[0x7];                                       // 0x0821(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller95;                      // 0x0828(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer95;                // 0x0830(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData52[0x7];                                       // 0x0831(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller94;                      // 0x0838(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer94;                // 0x0840(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData53[0x7];                                       // 0x0841(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller93;                      // 0x0848(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer93;                // 0x0850(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData54[0x7];                                       // 0x0851(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller92;                      // 0x0858(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer92;                // 0x0860(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData55[0x7];                                       // 0x0861(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller91;                      // 0x0868(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer91;                // 0x0870(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData56[0x7];                                       // 0x0871(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller90;                      // 0x0878(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer90;                // 0x0880(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData57[0x7];                                       // 0x0881(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller89;                      // 0x0888(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer89;                // 0x0890(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData58[0x7];                                       // 0x0891(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller88;                      // 0x0898(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer88;                // 0x08A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData59[0x7];                                       // 0x08A1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller87;                      // 0x08A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer87;                // 0x08B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData60[0x7];                                       // 0x08B1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller86;                      // 0x08B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer86;                // 0x08C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData61[0x7];                                       // 0x08C1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller85;                      // 0x08C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer85;                // 0x08D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData62[0x7];                                       // 0x08D1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller84;                      // 0x08D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer84;                // 0x08E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData63[0x7];                                       // 0x08E1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller83;                      // 0x08E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer83;                // 0x08F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData64[0x7];                                       // 0x08F1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller82;                      // 0x08F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer82;                // 0x0900(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData65[0x7];                                       // 0x0901(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller81;                      // 0x0908(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer81;                // 0x0910(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData66[0x7];                                       // 0x0911(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller80;                      // 0x0918(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer80;                // 0x0920(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData67[0x7];                                       // 0x0921(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller79;                      // 0x0928(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer79;                // 0x0930(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData68[0x7];                                       // 0x0931(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller78;                      // 0x0938(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer78;                // 0x0940(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData69[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller77;                      // 0x0948(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer77;                // 0x0950(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData70[0x7];                                       // 0x0951(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller76;                      // 0x0958(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer76;                // 0x0960(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData71[0x7];                                       // 0x0961(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller75;                      // 0x0968(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer75;                // 0x0970(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData72[0x7];                                       // 0x0971(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller74;                      // 0x0978(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer74;                // 0x0980(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData73[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller73;                      // 0x0988(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer73;                // 0x0990(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData74[0x7];                                       // 0x0991(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller72;                      // 0x0998(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer72;                // 0x09A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData75[0x7];                                       // 0x09A1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller71;                      // 0x09A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer71;                // 0x09B0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData76[0x7];                                       // 0x09B1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller70;                      // 0x09B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer70;                // 0x09C0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData77[0x7];                                       // 0x09C1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller69;                      // 0x09C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer69;                // 0x09D0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData78[0x7];                                       // 0x09D1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller68;                      // 0x09D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer68;                // 0x09E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData79[0x7];                                       // 0x09E1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller67;                      // 0x09E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer67;                // 0x09F0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData80[0x7];                                       // 0x09F1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller66;                      // 0x09F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer66;                // 0x0A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData81[0x7];                                       // 0x0A01(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller65;                      // 0x0A08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer65;                // 0x0A10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData82[0x7];                                       // 0x0A11(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller64;                      // 0x0A18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer64;                // 0x0A20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData83[0x7];                                       // 0x0A21(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller63;                      // 0x0A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer63;                // 0x0A30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData84[0x7];                                       // 0x0A31(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller62;                      // 0x0A38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer62;                // 0x0A40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData85[0x7];                                       // 0x0A41(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller61;                      // 0x0A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer61;                // 0x0A50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData86[0x7];                                       // 0x0A51(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller60;                      // 0x0A58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer60;                // 0x0A60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData87[0x7];                                       // 0x0A61(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller59;                      // 0x0A68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer59;                // 0x0A70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData88[0x7];                                       // 0x0A71(0x0007) MISSED OFFSET
	class APlayerController*                           CallFunc_GetPlayerController_ReturnValue;                 // 0x0A78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AShooterPlayerController*                    K2Node_DynamicCast_AsShooterPlayerController;             // 0x0A80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0A88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0A89(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData89[0x6];                                       // 0x0A8A(0x0006) MISSED OFFSET
	class AShooterCharacter*                           CallFunc_GetPlayerCharacter_ReturnValue;                  // 0x0A90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller58;                      // 0x0A98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer58;                // 0x0AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue2;              // 0x0AA1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData90[0x6];                                       // 0x0AA2(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller57;                      // 0x0AA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer57;                // 0x0AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData91[0x7];                                       // 0x0AB1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller56;                      // 0x0AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer56;                // 0x0AC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData92[0x7];                                       // 0x0AC1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller55;                      // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer55;                // 0x0AD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData93[0x7];                                       // 0x0AD1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller54;                      // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer54;                // 0x0AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData94[0x7];                                       // 0x0AE1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller53;                      // 0x0AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer53;                // 0x0AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData95[0x7];                                       // 0x0AF1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller52;                      // 0x0AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer52;                // 0x0B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData96[0x7];                                       // 0x0B01(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller51;                      // 0x0B08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer51;                // 0x0B10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData97[0x7];                                       // 0x0B11(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller50;                      // 0x0B18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer50;                // 0x0B20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData98[0x7];                                       // 0x0B21(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller49;                      // 0x0B28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer49;                // 0x0B30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData99[0x7];                                       // 0x0B31(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller48;                      // 0x0B38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer48;                // 0x0B40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData100[0x7];                                      // 0x0B41(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller47;                      // 0x0B48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer47;                // 0x0B50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData101[0x7];                                      // 0x0B51(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller46;                      // 0x0B58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer46;                // 0x0B60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData102[0x7];                                      // 0x0B61(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller45;                      // 0x0B68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer45;                // 0x0B70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData103[0x7];                                      // 0x0B71(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller44;                      // 0x0B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer44;                // 0x0B80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData104[0x7];                                      // 0x0B81(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller43;                      // 0x0B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer43;                // 0x0B90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData105[0x7];                                      // 0x0B91(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller42;                      // 0x0B98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer42;                // 0x0BA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData106[0x7];                                      // 0x0BA1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller41;                      // 0x0BA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer41;                // 0x0BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData107[0x7];                                      // 0x0BB1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller40;                      // 0x0BB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer40;                // 0x0BC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData108[0x7];                                      // 0x0BC1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller39;                      // 0x0BC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer39;                // 0x0BD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData109[0x7];                                      // 0x0BD1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller38;                      // 0x0BD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer38;                // 0x0BE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData110[0x7];                                      // 0x0BE1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller37;                      // 0x0BE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer37;                // 0x0BF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData111[0x7];                                      // 0x0BF1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller36;                      // 0x0BF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer36;                // 0x0C00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData112[0x7];                                      // 0x0C01(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller35;                      // 0x0C08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer35;                // 0x0C10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x0C11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData113[0x6];                                      // 0x0C12(0x0006) MISSED OFFSET
	class APlayerCameraManager*                        CallFunc_GetPlayerCameraManager_ReturnValue3;             // 0x0C18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x0C20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData114[0x3];                                      // 0x0C21(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue3;                   // 0x0C24(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x0C30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue3;              // 0x0C31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ObjectObject_ReturnValue2;            // 0x0C32(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData115[0x5];                                      // 0x0C33(0x0005) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller34;                      // 0x0C38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer34;                // 0x0C40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_SupportsShaderModel5_ReturnValue;                // 0x0C41(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x0C42(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData116[0x5];                                      // 0x0C43(0x0005) MISSED OFFSET
	class UShooterGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue;                     // 0x0C48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0C50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue2;                    // 0x0C58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UShooterGameUserSettings*                    CallFunc_GetUserSettings_ReturnValue3;                    // 0x0C60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue2;             // 0x0C68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller33;                      // 0x0C70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer33;                // 0x0C78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData117[0x7];                                      // 0x0C79(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue3;             // 0x0C80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller32;                      // 0x0C88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer32;                // 0x0C90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue4;              // 0x0C91(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x0C92(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x0C93(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_IsClosed_Variable2;                             // 0x0C94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Has_Been_Initd_Variable2;                       // 0x0C95(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData118[0x2];                                      // 0x0C96(0x0002) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller31;                      // 0x0C98(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer31;                // 0x0CA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData119[0x7];                                      // 0x0CA1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller30;                      // 0x0CA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer30;                // 0x0CB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData120[0x7];                                      // 0x0CB1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller29;                      // 0x0CB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer29;                // 0x0CC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData121[0x7];                                      // 0x0CC1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller28;                      // 0x0CC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer28;                // 0x0CD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData122[0x7];                                      // 0x0CD1(0x0007) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue;                        // 0x0CD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue4;                  // 0x0CE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData123[0x7];                                      // 0x0CE1(0x0007) MISSED OFFSET
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState;                    // 0x0CE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0CF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x0CF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData124[0x6];                                      // 0x0CF2(0x0006) MISSED OFFSET
	class AGameState*                                  CallFunc_GetGameState_ReturnValue2;                       // 0x0CF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0D00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData125[0x7];                                      // 0x0D01(0x0007) MISSED OFFSET
	class AShooterGameState*                           K2Node_DynamicCast_AsShooterGameState2;                   // 0x0D08(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0D10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue5;                  // 0x0D11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x0D12(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable2;// 0x0D13(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x0D14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData126[0x3];                                      // 0x0D15(0x0003) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller27;                      // 0x0D18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer27;                // 0x0D20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData127[0x7];                                      // 0x0D21(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller26;                      // 0x0D28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer26;                // 0x0D30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue;                        // 0x0D31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData128[0x6];                                      // 0x0D32(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller25;                      // 0x0D38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer25;                // 0x0D40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData129[0x7];                                      // 0x0D41(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller24;                      // 0x0D48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer24;                // 0x0D50(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData130[0x7];                                      // 0x0D51(0x0007) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0D58(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller23;                      // 0x0D60(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer23;                // 0x0D68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData131[0x7];                                      // 0x0D69(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller22;                      // 0x0D70(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer22;                // 0x0D78(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData132[0x7];                                      // 0x0D79(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller21;                      // 0x0D80(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer21;                // 0x0D88(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData133[0x7];                                      // 0x0D89(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller20;                      // 0x0D90(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer20;                // 0x0D98(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData134[0x7];                                      // 0x0D99(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller19;                      // 0x0DA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer19;                // 0x0DA8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData135[0x7];                                      // 0x0DA9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller18;                      // 0x0DB0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer18;                // 0x0DB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData136[0x7];                                      // 0x0DB9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller17;                      // 0x0DC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer17;                // 0x0DC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData137[0x7];                                      // 0x0DC9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller16;                      // 0x0DD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer16;                // 0x0DD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData138[0x7];                                      // 0x0DD9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller15;                      // 0x0DE0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer15;                // 0x0DE8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData139[0x7];                                      // 0x0DE9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller14;                      // 0x0DF0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer14;                // 0x0DF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData140[0x7];                                      // 0x0DF9(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller13;                      // 0x0E00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer13;                // 0x0E08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData141[0x7];                                      // 0x0E09(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller12;                      // 0x0E10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer12;                // 0x0E18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData142[0x7];                                      // 0x0E19(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller11;                      // 0x0E20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer11;                // 0x0E28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData143[0x7];                                      // 0x0E29(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller10;                      // 0x0E30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer10;                // 0x0E38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData144[0x7];                                      // 0x0E39(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller9;                       // 0x0E40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer9;                 // 0x0E48(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData145[0x7];                                      // 0x0E49(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller8;                       // 0x0E50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer8;                 // 0x0E58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData146[0x3];                                      // 0x0E59(0x0003) MISSED OFFSET
	int                                                CallFunc_Add_IntInt_ReturnValue2;                         // 0x0E5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Subtract_IntInt_ReturnValue;                     // 0x0E60(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Max_ReturnValue;                                 // 0x0E64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_IntInt_ReturnValue;                   // 0x0E68(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsReallyUnderwater_ReallyUnderwater;             // 0x0E69(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x0E6A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsReallyUnderwater_ReallyUnderwater2;            // 0x0E6B(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x0E6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x0E6D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x0E6E(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x0E6F(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsReallyUnderwater_ReallyUnderwater3;            // 0x0E70(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x0E71(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue2;                       // 0x0E72(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x0E73(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData147[0x4];                                      // 0x0E74(0x0004) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller7;                       // 0x0E78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer7;                 // 0x0E80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue3;                       // 0x0E81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData148[0x6];                                      // 0x0E82(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller6;                       // 0x0E88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer6;                 // 0x0E90(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData149[0x3];                                      // 0x0E91(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_Difficulty2;                           // 0x0E94(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	int                                                CallFunc_Add_IntInt_ReturnValue3;                         // 0x0E98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x0E9C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData150[0x3];                                      // 0x0E9D(0x0003) MISSED OFFSET
	int                                                K2Node_CustomEvent_Difficulty;                            // 0x0EA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData151[0x4];                                      // 0x0EA4(0x0004) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x0EA8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x0EB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData152[0x7];                                      // 0x0EB1(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller5;                       // 0x0EB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer5;                 // 0x0EC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData153[0x3];                                      // 0x0EC1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0EC4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller4;                       // 0x0ED0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer4;                 // 0x0ED8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData154[0x7];                                      // 0x0ED9(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_ServerOctreeOverlapActors_ReturnValue;           // 0x0EE0(0x0010) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                CallFunc_Array_Length_ReturnValue;                        // 0x0EF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_IntInt_ReturnValue;                         // 0x0EF4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData155[0x3];                                      // 0x0EF5(0x0003) MISSED OFFSET
	class AActor*                                      CallFunc_Array_Get_Item;                                  // 0x0EF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue2;                // 0x0F00(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BPEncompassesPoint_OutDistanceToPoint;           // 0x0F0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BPEncompassesPoint_ReturnValue;                  // 0x0F10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue10;                       // 0x0F11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData156[0x6];                                      // 0x0F12(0x0006) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller3;                       // 0x0F18(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer3;                 // 0x0F20(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData157[0x7];                                      // 0x0F21(0x0007) MISSED OFFSET
	class APlayerController*                           K2Node_ActorBoundEvent_Controller2;                       // 0x0F28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer2;                 // 0x0F30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_HasAuthority_ReturnValue4;                       // 0x0F31(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData158[0x2];                                      // 0x0F32(0x0002) MISSED OFFSET
	int                                                CallFunc_Subtract_IntInt_ReturnValue2;                    // 0x0F34(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_IntInt_ReturnValue;                      // 0x0F38(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue6;                  // 0x0F39(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsShipping_ReturnValue;                          // 0x0F3A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData159[0x5];                                      // 0x0F3B(0x0005) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue3;                        // 0x0F40(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x0F48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APlayerController*                           K2Node_ActorBoundEvent_Controller;                        // 0x0F50(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_ActorBoundEvent_bIsPrimaryPlayer;                  // 0x0F58(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData160[0x3];                                      // 0x0F59(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloat_ReturnValue;                         // 0x0F5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x0F60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData161[0x7];                                      // 0x0F61(0x0007) MISSED OFFSET
	class AGameMode*                                   CallFunc_GetGameMode_ReturnValue;                         // 0x0F68(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x0F70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData162[0x4];                                      // 0x0F74(0x0004) MISSED OFFSET
	class AShooterGameMode*                            K2Node_DynamicCast_AsShooterGameMode;                     // 0x0F78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast4_CastSuccess;                          // 0x0F80(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue5;              // 0x0F81(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData163[0x6];                                      // 0x0F82(0x0006) MISSED OFFSET
	class AMatineeActor*                               MatineeActor_1_ExecuteUbergraph_TheIsland_RefProperty;    // 0x0F88(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherRain_ExecuteUbergraph_TheIsland_RefProperty;// 0x0F90(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADayCycleManager*                            DayCycleManager3_ExecuteUbergraph_TheIsland_RefProperty;  // 0x0F98(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               MatineeActor_0_ExecuteUbergraph_TheIsland_RefProperty;    // 0x0FA0(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATrueSkySequenceActor*                       TrueSkySequenceActor_0_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FA8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           DirectionalLight_ExecuteUbergraph_TheIsland_RefProperty;  // 0x0FB0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       Cave1_ExponentialHeightFog_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FB8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_WeatherFog_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FC0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       WeatherGlobalOutdoorrFog_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FC8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       Cave2_ExponentialHeightFog_2_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FD0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeValueInterpolationContainer_C*       MatineeValueInterpolationContainer_4_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FD8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_MasterDayCycle_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FE0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       Cave3_ExponentialHeightFog_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FE8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       Cave5ExponentialHeightFog_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FF0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       Cave7ExponentialHeightFog_2_ExecuteUbergraph_TheIsland_RefProperty;// 0x0FF8(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_Sky_Sphere_C*                            BP_Sky_Sphere_C_0_ExecuteUbergraph_TheIsland_RefProperty; // 0x1000(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAtmosphericFog*                             AtmosphericFog_1_ExecuteUbergraph_TheIsland_RefProperty;  // 0x1008(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADayCycleAmbientSound*                       DayCycleAmbientSound_1_ExecuteUbergraph_TheIsland_RefProperty;// 0x1010(0x0008) (ZeroConstructor, IsPlainOldData)
	class ADayCycleAmbientSound*                       AmbGlobalRainSoundSnow_ExecuteUbergraph_TheIsland_RefProperty;// 0x1018(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       IceCaveExponentialHeightFog_ExecuteUbergraph_TheIsland_RefProperty;// 0x1020(0x0008) (ZeroConstructor, IsPlainOldData)
	class ASkyLight*                                   SkyLight1_ExecuteUbergraph_TheIsland_RefProperty;         // 0x1028(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABP_IslandWaterPlane_C*                      BP_IslandWaterPlane_C_0_ExecuteUbergraph_TheIsland_RefProperty;// 0x1030(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            SM_OceanPlane_Algae_ExecuteUbergraph_TheIsland_RefProperty;// 0x1038(0x0008) (ZeroConstructor, IsPlainOldData)
	class AExponentialHeightFog*                       CaveVolcanoExponentialHeightFog_ExecuteUbergraph_TheIsland_RefProperty;// 0x1040(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               Matinee_DayTime_ExecuteUbergraph_TheIsland_RefProperty;   // 0x1048(0x0008) (ZeroConstructor, IsPlainOldData)
	class AMatineeActor*                               DoorOpenMatinee_ExecuteUbergraph_TheIsland_RefProperty;   // 0x1050(0x0008) (ZeroConstructor, IsPlainOldData)
	class ABlockingVolume*                             DoorBlockingVolume_ExecuteUbergraph_TheIsland_RefProperty;// 0x1058(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATogglePainVolume*                           TogglePainVolume_9_ExecuteUbergraph_TheIsland_RefProperty;// 0x1060(0x0008) (ZeroConstructor, IsPlainOldData)
	class AServerSidePoint_Huge_C*                     CenterOfVolcanoCavePoint_ExecuteUbergraph_TheIsland_RefProperty;// 0x1068(0x0008) (ZeroConstructor, IsPlainOldData)
	class AStaticMeshActor*                            Dirt_Plane_2700_ExecuteUbergraph_TheIsland_RefProperty;   // 0x1070(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATileStreamingVolume*                        RegionTileStreamingVolume_Hallway_ExecuteUbergraph_TheIsland_RefProperty;// 0x1078(0x0008) (ZeroConstructor, IsPlainOldData)
	class ATogglePainVolume*                           RegionHallwayKillVolume_ExecuteUbergraph_TheIsland_RefProperty;// 0x1080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TheIsland.TheIsland_C");
		return ptr;
	}


	void OnRep_CurrentTekCaveDifficulty();
	void IsReallyUnderwater(bool* ReallyUnderwater);
	void OnRep_bIsRaining();
	void K2Node_MatineeController_1_Finished();
	void K2Node_MatineeController_15_Finished();
	void K2Node_MatineeController_22_Finished();
	void K2Node_MatineeController_38_Finished();
	void K2Node_MatineeController_176_EnableCollision();
	void K2Node_MatineeController_176_DisableCollision();
	void K2Node_MatineeController_176_Finished();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__DayCycleManager3_K2Node_ActorBoundEvent_12_ActorMatineeUpdated__DelegateSignature();
	void BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_0_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CaveGeneralPostProcess_2_K2Node_ActorBoundEvent_31_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_67_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave02_Encompassing_PostProcess_K2Node_ActorBoundEvent_92_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void makeitrain();
	void FogItUp();
	void katyperry();
	void noweather();
	void doweather();
	void BndEvt__MatineeValueInterpolationContainer_4_K2Node_ActorBoundEvent_256_ActorMatineeUpdated__DelegateSignature();
	void stoptime();
	void StartTime();
	void BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_233_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave03_General_PostProcess_Volume_K2Node_ActorBoundEvent_257_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_693_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave5GeneralPostProcessVolume_3_K2Node_ActorBoundEvent_728_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_213_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave06_Encompassing_PostProcessVolume_K2Node_ActorBoundEvent_254_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_139_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__Cave7PostProcessVolume_K2Node_ActorBoundEvent_182_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_394_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__WaterPostProcess_2_K2Node_ActorBoundEvent_427_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_2608_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_2609_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_2610_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_2611_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_2612_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_2613_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_2614_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_2615_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_2616_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_2617_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_2618_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_2619_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_2620_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_2621_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_2622_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_2623_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_2624_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_2625_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_2626_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_2627_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_2628_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_2630_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_2631_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_2632_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_2633_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_2634_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_2635_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_2636_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_2637_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_2638_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_2639_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_2640_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_2641_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume68_K2Node_ActorBoundEvent_5343_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume35_K2Node_ActorBoundEvent_5344_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume36_K2Node_ActorBoundEvent_5345_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume37_K2Node_ActorBoundEvent_5346_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume38_K2Node_ActorBoundEvent_5347_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume39_K2Node_ActorBoundEvent_5348_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume40_K2Node_ActorBoundEvent_5349_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume41_K2Node_ActorBoundEvent_5350_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume42_K2Node_ActorBoundEvent_5351_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume43_K2Node_ActorBoundEvent_5352_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume44_K2Node_ActorBoundEvent_5353_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume45_K2Node_ActorBoundEvent_5354_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume46_K2Node_ActorBoundEvent_5355_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume47_K2Node_ActorBoundEvent_5356_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume48_K2Node_ActorBoundEvent_5357_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume49_K2Node_ActorBoundEvent_5358_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume50_K2Node_ActorBoundEvent_5359_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume51_K2Node_ActorBoundEvent_5360_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume52_K2Node_ActorBoundEvent_5361_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume53_K2Node_ActorBoundEvent_5362_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume54_K2Node_ActorBoundEvent_5363_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume56_K2Node_ActorBoundEvent_5365_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume57_K2Node_ActorBoundEvent_5366_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume58_K2Node_ActorBoundEvent_5367_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume59_K2Node_ActorBoundEvent_5368_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_5369_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume61_K2Node_ActorBoundEvent_5370_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume62_K2Node_ActorBoundEvent_5371_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume63_K2Node_ActorBoundEvent_5372_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume64_K2Node_ActorBoundEvent_5373_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume65_K2Node_ActorBoundEvent_5374_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume66_K2Node_ActorBoundEvent_5375_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume67_K2Node_ActorBoundEvent_5376_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_504_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_505_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_506_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_507_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_508_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_509_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_510_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_511_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_512_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_513_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_514_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_515_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_BigPostProcessVolume_K2Node_ActorBoundEvent_1782_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_BigPostProcessVolume_3_K2Node_ActorBoundEvent_1783_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_BigPostProcessVolume_4_K2Node_ActorBoundEvent_1784_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_BigPostProcessVolume_5_K2Node_ActorBoundEvent_1785_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_Medium_PostProcessVolume_K2Node_ActorBoundEvent_1786_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_Medium_PostProcessVolume_3_K2Node_ActorBoundEvent_1787_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_Medium_PostProcessVolume_4_K2Node_ActorBoundEvent_1788_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_Medium_PostProcessVolume_5_K2Node_ActorBoundEvent_1789_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_SmalPostProcessVolume_2_K2Node_ActorBoundEvent_1790_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_SmalPostProcessVolume_3_K2Node_ActorBoundEvent_1791_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_SmalPostProcessVolume_4_K2Node_ActorBoundEvent_1792_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__UnderWaterCave_SmalPostProcessVolume_5_K2Node_ActorBoundEvent_1793_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_1514_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_997_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PP_SnowBiomeVolume_K2Node_ActorBoundEvent_1124_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void RainStopped();
	void BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1470_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__SwampCave_PostProcessVolume_K2Node_ActorBoundEvent_1616_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2319_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__IceCaveGeneralPostProcessVolume_K2Node_ActorBoundEvent_2450_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1227_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__SpiderBossPostProcessing_K2Node_ActorBoundEvent_1462_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1058_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__GorillaSnowBossPostProcessing_K2Node_ActorBoundEvent_1178_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1432_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__DragonPostProcessVolume_K2Node_ActorBoundEvent_1569_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_3377_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_3506_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_3636_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3767_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3899_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume8_K2Node_ActorBoundEvent_2747_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume7_K2Node_ActorBoundEvent_2871_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume6_K2Node_ActorBoundEvent_2996_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume5_K2Node_ActorBoundEvent_3122_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__LakePostProcessVolume4_K2Node_ActorBoundEvent_3249_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1642_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CaveWestPostprocessVolume_16_K2Node_ActorBoundEvent_1776_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2030_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume55_K2Node_ActorBoundEvent_2167_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PostProcessVolume_10_K2Node_ActorBoundEvent_957_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__VolcanoCavePostProcessVolume_K2Node_ActorBoundEvent_979_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void NetSetTekCaveDifficulty(int difficulty);
	void NetClearTekCaveDifficulty();
	void EndTekCave();
	void ActivateTekCave(int difficulty);
	void BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1277_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__PP_FinalBoss_K2Node_ActorBoundEvent_1420_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void EnableEndBossArena();
	void DisableEndBossArena();
	void BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1494_PostprocessVolumeEnteredSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void BndEvt__CaveEastPostprocessVolume_2_K2Node_ActorBoundEvent_1654_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void ColdFront();
	void HeatWave();
	void BndEvt__PostProcessVolume60_K2Node_ActorBoundEvent_834_PostprocessVolumeLeftSignature__DelegateSignature(class APlayerController* Controller, bool bIsPrimaryPlayer);
	void timberlake();
	void stoprain();
	void stopfog();
	void ExecuteUbergraph_TheIsland(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
