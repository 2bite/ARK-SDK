#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WaterVein_Base_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WaterVein_Base_BP.WaterVein_Base_BP_C
// 0x0010 (0x0F08 - 0x0EF8)
class AWaterVein_Base_BP_C : public APrimalStructureItemContainer_CropPlot
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0EF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSetInitialWater;                                         // 0x0F00(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0F01(0x0003) MISSED OFFSET
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0F04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WaterVein_Base_BP.WaterVein_Base_BP_C");
		return ptr;
	}


	void BlueprintDrawHUD(class AShooterHUD** HUD, float* CenterX, float* CenterY);
	void UpdateWaterVisuals();
	void ReceiveBeginPlay();
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	void UserConstructionScript();
	void PostInitUpdateWaterVisuals();
	void ExecuteUbergraph_WaterVein_Base_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
