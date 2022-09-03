#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Xenomorph_Character_BP_Male_Lunar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C
// 0x0051 (0x2A61 - 0x2A10)
class AXenomorph_Character_BP_Male_Lunar_C : public AXenomorph_Character_BP_Male_C
{
public:
	class UDinoCharacterStatusComponent_BP_Xenomorph_Reaper_Surface_C* DinoCharacterStatus_BP_Xenomorph_Reaper_Surface_C1;       // 0x2A10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              delayBeforeDestroyingOnDaytime;                           // 0x2A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              maxRandomizedTimeBeforeDestroying;                        // 0x2A1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               readyToDestroy;                                           // 0x2A20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue;                            // 0x2A21(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x2A22(0x0006) MISSED OFFSET
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x2A28(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue;                  // 0x2A30(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue2;                        // 0x2A38(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsServer_ReturnValue2;                           // 0x2A40(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x2A41(0x0007) MISSED OFFSET
	class ADayCycleManager*                            CallFunc_GetDayCycleManager_ReturnValue2;                 // 0x2A48(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FScriptDelegate                             K2Node_CreateDelegate_OutputDelegate;                     // 0x2A50(0x0014) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               CallFunc_IsServer_ReturnValue3;                           // 0x2A60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Xenomorph_Character_BP_Male_Lunar.Xenomorph_Character_BP_Male_Lunar_C");
		return ptr;
	}


	void BPTimerServer();
	void InitializeDive();
	void Can_Dive(bool* Return);
	bool ShouldUnbury();
	void ShouldBury(bool* Result);
	void UserConstructionScript();
	void OnStartDayTime_Xeno();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Xenomorph_Character_BP_Male_Lunar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
