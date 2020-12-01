#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ExplorerNoteHLNA_ClientOnly_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C
// 0x0014 (0x08B4 - 0x08A0)
class ABuff_ExplorerNoteHLNA_ClientOnly_C : public ABuff_Base_C
{
public:
	class UMaterialInstanceDynamic*                    HLNAIcon;                                                 // 0x08A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HLNAIconSize;                                             // 0x08A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HLNAIconYOffset;                                          // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HLNAIconXOffset;                                          // 0x08B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ExplorerNoteHLNA_ClientOnly.Buff_ExplorerNoteHLNA_ClientOnly_C");
		return ptr;
	}


	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BuffTickClient(float* DeltaTime);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ExplorerNoteHLNA_ClientOnly(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif