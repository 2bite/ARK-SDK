#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MegaMekSetupForPlayer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C
// 0x0160 (0x0AD8 - 0x0978)
class ABuff_MegaMekSetupForPlayer_C : public ABuff_Base_C
{
public:
	struct FDinoSetup                                  MegaMekTransformationSetup;                               // 0x0978(0x00F0) (Edit, BlueprintVisible)
	class UClass*                                      DepletedBuff;                                             // 0x0A68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               MovedPlayer;                                              // 0x0A70(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A71(0x0007) MISSED OFFSET
	class APrimalDinoCharacter*                        MegaMekDino;                                              // 0x0A78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TransformSocketLocationAtBuffStart;                       // 0x0A80(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       TransformSocketName;                                      // 0x0A8C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0A94(0x0004) MISSED OFFSET
	class UParticleSystem*                             TransformParticleSystem;                                  // 0x0A98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   TransformSound;                                           // 0x0AA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundAttenuation*                           TransformSoundAttenuationSettings;                        // 0x0AA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0AB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x6];                                       // 0x0AB2(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    CallFunc_SpawnEmitterAtLocation_ReturnValue;              // 0x0AB8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalCharacter*                            K2Node_DynamicCast_AsPrimalCharacter;                     // 0x0AC0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0AC8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0AC9(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetSocketLocation_ReturnValue;                   // 0x0ACC(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MegaMekSetupForPlayer.Buff_MegaMekSetupForPlayer_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void MultiPlayTransformVFX();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Buff_MegaMekSetupForPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
