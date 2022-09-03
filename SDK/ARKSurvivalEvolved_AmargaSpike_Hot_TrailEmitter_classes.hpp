#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Hot_TrailEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmargaSpike_Hot_TrailEmitter.AmargaSpike_Hot_TrailEmitter_C
// 0x0001 (0x0519 - 0x0518)
class AAmargaSpike_Hot_TrailEmitter_C : public APrimalEmitterSpawnable
{
public:
	bool                                               bIsInWater;                                               // 0x0518(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Hot_TrailEmitter.AmargaSpike_Hot_TrailEmitter_C");
		return ptr;
	}


	void InWaterCheck();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_AmargaSpike_Hot_TrailEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
