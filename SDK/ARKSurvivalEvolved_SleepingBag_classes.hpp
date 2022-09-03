#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SleepingBag_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SleepingBag.SleepingBag_C
// 0x0004 (0x0F54 - 0x0F50)
class ASleepingBag_C : public ABedBaseBP_C
{
public:
	float                                              AllowedToBuildZAxisDisplacementLimit;                     // 0x0F50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SleepingBag.SleepingBag_C");
		return ptr;
	}


	int BPIsAllowedToBuildEx(int* CurrentAllowedReason, class APlayerController** PC, bool* bFinalPlacement, bool* bChoosingRotation, struct FPlacementData* OutPlacementData);
	void UserConstructionScript();
	void ExecuteUbergraph_SleepingBag(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
