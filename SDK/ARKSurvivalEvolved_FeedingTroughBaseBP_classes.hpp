#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FeedingTroughBaseBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FeedingTroughBaseBP.FeedingTroughBaseBP_C
// 0x001E (0x0E1E - 0x0E00)
class AFeedingTroughBaseBP_C : public APrimalStructureItemContainer_VisualItems
{
public:
	class UStaticMeshComponent*                        EffectField;                                              // 0x0E00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USphereComponent*                            StasisComponent;                                          // 0x0E08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShowArea;                                                 // 0x0E10(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0E11(0x0003) MISSED OFFSET
	int                                                VisibleAreaUseIndex;                                      // 0x0E14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                VisibleAreaPriority;                                      // 0x0E18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x0E1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_BoolBool_ReturnValue;                 // 0x0E1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FeedingTroughBaseBP.FeedingTroughBaseBP_C");
		return ptr;
	}


	void Check_Team_and_Set_Visual_Visibility();
	bool BPServerHandleNetExecCommand(class APlayerController** FromPC, struct FName* CommandName, struct FBPNetExecParams* ExecParams);
	void OnRep_ShowArea();
	void BPClientDoMultiUse(class APlayerController** ForPC, int* ClientUseIndex);
	TArray<struct FMultiUseEntry> BPGetMultiUseEntries(class APlayerController** ForPC, TArray<struct FMultiUseEntry>* MultiUseEntries);
	void ReceiveBeginPlay();
	void ThrottledTick();
	void UserConstructionScript();
	void ServerRequest_ToggleShowarea();
	void ExecuteUbergraph_FeedingTroughBaseBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
