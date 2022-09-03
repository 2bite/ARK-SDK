#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Cold_TrailEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C
// 0x0001 (0x0519 - 0x0518)
class AAmargaSpike_Cold_TrailEmitter_C : public APrimalEmitterSpawnable
{
public:
	bool                                               bIsInWater;                                               // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Cold_TrailEmitter.AmargaSpike_Cold_TrailEmitter_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void InWaterCheck();
	void UserConstructionScript();
	void ExecuteUbergraph_AmargaSpike_Cold_TrailEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
