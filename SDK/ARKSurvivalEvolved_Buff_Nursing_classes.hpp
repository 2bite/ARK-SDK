#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Nursing_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Nursing.Buff_Nursing_C
// 0x0004 (0x0964 - 0x0960)
class ABuff_Nursing_C : public ABuff_Base_C
{
public:
	float                                              BuffImprintingEffectivenessMultiplier;                    // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Nursing.Buff_Nursing_C");
		return ptr;
	}


	float BPGetBabyImprintingSpeedMultiplier();
	void DrawBuffFloatingHUD(int* BuffIndex, class AShooterHUD** HUD, float* CenterX, float* CenterY, float* DrawScale);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Nursing(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
