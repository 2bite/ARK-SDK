#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Desmodus_NightVision_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C
// 0x0020 (0x09D0 - 0x09B0)
class ABuff_Desmodus_NightVision_C : public ABuff_XRay_Base_C
{
public:
	class UMaterialInstanceDynamic*                    OverlayMaterial;                                          // 0x09B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TestFloat;                                                // 0x09B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x09BC(0x0004) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_SphereOverlapActors_NEW_ActorsToIgnore_RefProperty;// 0x09C0(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Desmodus_NightVision.Buff_Desmodus_NightVision_C");
		return ptr;
	}


	bool STATIC_BuffOverrideInventoryAccessInput(class AController** InController, bool* bInputPressed);
	void BPDeactivated(class AActor** ForInstigator);
	void ReceiveBeginPlay();
	void BuffTickClient(float* DeltaTime);
	void ToggleNightVision();
	bool BPTryMultiUse(class APlayerController** ForPC, int* UseIndex);
	TArray<struct FMultiUseEntry> STATIC_BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void BPSetupForInstigator(class AActor** ForInstigator);
	void SetPPColor(const struct FLinearColor& NewParam);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Desmodus_NightVision(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
