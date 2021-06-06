#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BiomeApplied_Gen2NoTick_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C
// 0x0005 (0x0965 - 0x0960)
class ABuff_BiomeApplied_Gen2NoTick_C : public ABuff_Base_C
{
public:
	float                                              BuffZoneRemovalTimeThreshold;                             // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeactivationTimerActive;                                 // 0x0964(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BiomeApplied_Gen2NoTick.Buff_BiomeApplied_Gen2NoTick_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BiomeApplied_Gen2NoTick(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
