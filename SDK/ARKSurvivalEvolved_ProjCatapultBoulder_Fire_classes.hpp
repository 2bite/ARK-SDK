#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjCatapultBoulder_Fire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C
// 0x001C (0x06A4 - 0x0688)
class AProjCatapultBoulder_Fire_C : public AProjCatapultBoulder_C
{
public:
	float                                              ImpactSurfaceHeightOffsetForTraces;                       // 0x0688(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TraceLength;                                              // 0x068C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumberOfRandomTraces;                                     // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxNumberOfFiresToSpawn;                                  // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x0698(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjCatapultBoulder_Fire.ProjCatapultBoulder_Fire_C");
		return ptr;
	}


	void OnExplode(struct FHitResult* Result);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjCatapultBoulder_Fire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
