#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Fjordhawk_Mounted_Buff_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C
// 0x0090 (0x0A08 - 0x0978)
class AFjordhawk_Mounted_Buff_C : public ABuff_Base_C
{
public:
	TArray<class APrimalCharacter*>                    DamagedTargets;                                           // 0x0978(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	float                                              TargetHealthThreshold;                                    // 0x0988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x098C(0x0004) MISSED OFFSET
	class UTexture*                                    TargetIcon;                                               // 0x0990(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                CorpseIconColor;                                          // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetUpdateInterval;                                     // 0x09A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetRadius;                                             // 0x09AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AFjordhawk_Character_BP_C*                   Hawk;                                                     // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TArray<class APrimalStructure*>                    InventoryTargets;                                         // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	class UTexture*                                    CacheIcon;                                                // 0x09C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceDistance;                                            // 0x09D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x09D4(0x0004) MISSED OFFSET
	class FString                                      DisableString;                                            // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FString                                      EnableString;                                             // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x09F8(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fjordhawk_Mounted_Buff.Fjordhawk_Mounted_Buff_C");
		return ptr;
	}


	void HideCrosshair();
	void BuffTickClient(float* DeltaTime);
	void STATIC_CheckForTarget();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void UpdateNearbyTargets();
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Fjordhawk_Mounted_Buff(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
