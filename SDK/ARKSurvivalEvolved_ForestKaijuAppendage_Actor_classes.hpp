#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ForestKaijuAppendage_Actor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C
// 0x0008 (0x0470 - 0x0468)
class AForestKaijuAppendage_Actor_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ForestKaijuAppendage_Actor.ForestKaijuAppendage_Actor_C");
		return ptr;
	}


	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void ExecuteUbergraph_ForestKaijuAppendage_Actor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
