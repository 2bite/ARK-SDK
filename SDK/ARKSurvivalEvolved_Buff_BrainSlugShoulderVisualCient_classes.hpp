#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BrainSlugShoulderVisualCient_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C
// 0x0014 (0x0974 - 0x0960)
class ABuff_BrainSlugShoulderVisualCient_C : public ABuff_Base_C
{
public:
	struct FLinearColor                                CrosshairColor;                                           // 0x0960(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              K2Node_Event_DeltaTime;                                   // 0x0970(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BrainSlugShoulderVisualCient.Buff_BrainSlugShoulderVisualCient_C");
		return ptr;
	}


	void BPGetHUDElements(class APlayerController** ForPC, TArray<struct FHUDElement>* OutElements);
	void STATIC_DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void UserConstructionScript();
	void BuffTickClient(float* DeltaTime);
	void ExecuteUbergraph_Buff_BrainSlugShoulderVisualCient(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
