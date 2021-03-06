#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekDepleted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MekDepleted.Buff_MekDepleted_C
// 0x01D0 (0x0B30 - 0x0960)
class ABuff_MekDepleted_C : public ABuff_Base_C
{
public:
	float                                              DepleteMek_Alpha_67C98D92481DDAB39CB8FDAFA2995645;        // 0x0960(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    DepleteMek__Direction_67C98D92481DDAB39CB8FDAFA2995645;   // 0x0964(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0965(0x0003) MISSED OFFSET
	class UTimelineComponent*                          DepleteMek;                                               // 0x0968(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FDinoSetup                                  MegaMekTransformationSetup;                               // 0x0970(0x00F0) (Edit, BlueprintVisible)
	struct FLinearColor                                OwnerMekColor;                                            // 0x0A60(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                RemoteMekColor;                                           // 0x0A70(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MovedPlayer;                                              // 0x0A80(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0A81(0x0003) MISSED OFFSET
	struct FVector                                     TransformSocketLocationAtBuffStart;                       // 0x0A84(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             TransformParticleSystem;                                  // 0x0A90(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   TransformSound;                                           // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           TransformSoundAttenuationSettings;                        // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MekTorsoDynamicMat;                                       // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    MekLimbsDynamicMat;                                       // 0x0AB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DroppedWeapons;                                           // 0x0AB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               DepletedThisMek;                                          // 0x0AB9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0ABA(0x0006) MISSED OFFSET
	double                                             CallFunc_GetNetworkTimeInSeconds_ReturnValue;             // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	double                                             CallFunc_Add_DoubleFloat_ReturnValue;                     // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_MapRange_ReturnValue;                            // 0x0AD0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x0AD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x0AD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0AD9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0ADA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x1];                                       // 0x0ADB(0x0001) MISSED OFFSET
	struct FVector                                     CallFunc_K2_GetActorLocation_ReturnValue;                 // 0x0ADC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalDinoCharacter*                        K2Node_DynamicCast_AsPrimalDinoCharacter;                 // 0x0AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0AF1(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode;                // 0x0B00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum2_CmpSuccess;                            // 0x0B01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x0B02(0x0002) MISSED OFFSET
	float                                              CallFunc_GetTimelineLength_ReturnValue;                   // 0x0B04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x0B08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0B0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x0B0D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0B0E(0x0002) MISSED OFFSET
	class AMek_Character_BP_C*                         K2Node_DynamicCast_AsMek_Character_BP_C;                  // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x0B19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_IsRunningOnServer_OutNetworkMode2;               // 0x0B1A(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData07[0x5];                                       // 0x0B1B(0x0005) MISSED OFFSET
	class AMek_Character_BP_C*                         K2Node_DynamicCast_AsMek_Character_BP_C2;                 // 0x0B20(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0B28(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum3_CmpSuccess;                            // 0x0B29(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0B2A(0x0002) MISSED OFFSET
	float                                              CallFunc_ModifyHeatLevel_NewHeatLevel;                    // 0x0B2C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekDepleted.Buff_MekDepleted_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void BPDeactivated(class AActor** ForInstigator);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void DepleteMek__FinishedFunc();
	void DepleteMek__UpdateFunc();
	void MultiStartDepleteMek();
	void AutoDepleteMek();
	void ExecuteUbergraph_Buff_MekDepleted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
