#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MountedSino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MountedSino.Buff_MountedSino_C
// 0x05B9 (0x0F31 - 0x0978)
class ABuff_MountedSino_C : public ABuff_Base_C
{
public:
	struct FHUDElement                                 DinoFoodHUDElement;                                       // 0x0978(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHUDElement                                 DinoStaminaHUDElement;                                    // 0x0AC8(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	double                                             LastScreamTime;                                           // 0x0C18(0x0008) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ScreamInterval;                                           // 0x0C20(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0C24(0x0004) MISSED OFFSET
	struct FHUDElement                                 ScreamHUDElement;                                         // 0x0C28(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              BuddyTraceDistance;                                       // 0x0D78(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0D7C(0x0004) MISSED OFFSET
	class AShooterCharacter*                           BuddyCharacter;                                           // 0x0D80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FHUDElement                                 GliderBuffHUDElement;                                     // 0x0D88(0x0150) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLinearColor                                BuddyCrosshairColor;                                      // 0x0ED8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AShooterCharacter*                           K2Node_CustomEvent_Character;                             // 0x0EE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FBPNetExecParams                            K2Node_MakeStruct_BPNetExecParams;                        // 0x0EF0(0x0040) (Transient, DuplicateTransient)
	bool                                               CallFunc_BPServerHandleNetExecCommand_ReturnValue;        // 0x0F30(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MountedSino.Buff_MountedSino_C");
		return ptr;
	}


	void GetSinoFoodVals(float* current, float* Max);
	void STATIC_BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void BuffTickServer(float* DeltaTime);
	void SetLastScreamTime(double Time);
	void BuffTickClient(float* DeltaTime);
	void HideCrosshair();
	struct FColor BPGetCrosshairColor();
	void STATIC_CheckForBuddyThrow();
	void GetSinoStaminaVals(float* current, float* Max);
	void UserConstructionScript();
	void Server_SetMountedSinoBuddyChar(class AShooterCharacter* Character);
	void ExecuteUbergraph_Buff_MountedSino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
