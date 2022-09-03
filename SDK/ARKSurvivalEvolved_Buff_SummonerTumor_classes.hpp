#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SummonerTumor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SummonerTumor.Buff_SummonerTumor_C
// 0x000D (0x0985 - 0x0978)
class ABuff_SummonerTumor_C : public ABuff_Base_C
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WaitTimeBeforeSpawnDino;                                  // 0x0980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               HasSpawnedDino;                                           // 0x0984(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SummonerTumor.Buff_SummonerTumor_C");
		return ptr;
	}


	void BPDeactivated(class AActor** ForInstigator);
	void BuffTickServer(float* DeltaTime);
	bool BPExcludeAoEActor(class AActor** ActorToConsider);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SummonerTumor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
