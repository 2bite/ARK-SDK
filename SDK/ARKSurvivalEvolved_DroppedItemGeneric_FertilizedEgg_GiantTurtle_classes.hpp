#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DroppedItemGeneric_FertilizedEgg_GiantTurtle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C
// 0x0001 (0x0739 - 0x0738)
class ADroppedItemGeneric_FertilizedEgg_GiantTurtle_C : public ADroppedItemGeneric_FertilizedEgg_C
{
public:
	bool                                               AllowIncubation;                                          // 0x0738(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedItemGeneric_FertilizedEgg_GiantTurtle.DroppedItemGeneric_FertilizedEgg_GiantTurtle_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UpdateAllowIncubation();
	void GetDefaultEggValues(float* DefaultEggDurabilityLoss, float* DefaultEggMinTemp, float* DefaultEggMaxTemp);
	void OnRep_AllowIncubation();
	void GetAllowIncubation(bool* Allow);
	void ThrottledTick();
	void UserConstructionScript();
	void ExecuteUbergraph_DroppedItemGeneric_FertilizedEgg_GiantTurtle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
