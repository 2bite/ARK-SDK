#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvernNest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvernNest.WyvernNest_C
// 0x000C (0x0AF4 - 0x0AE8)
class AWyvernNest_C : public AStructureBaseBP_C
{
public:
	class UClass*                                      DroppedItemEggClass;                                      // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CallFunc_RandomFloatInRange_ReturnValue;                  // 0x0AF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvernNest.WyvernNest_C");
		return ptr;
	}


	void CheckForNearbyEggs();
	void BPUnstasis();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void CheckForEggs();
	void ExecuteUbergraph_WyvernNest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
