#pragma once

// ARKSurvivalEvolved (332.8) SDK

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
// 0x0005 (0x097D - 0x0978)
class ABuff_BiomeApplied_Gen2NoTick_C : public ABuff_Base_C
{
public:
	float                                              BuffZoneRemovalTimeThreshold;                             // 0x0978(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDeactivationTimerActive;                                 // 0x097C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
