#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ShouldSwitchBiped_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShouldSwitchBiped.ShouldSwitchBiped_C
// 0x0054 (0x00D4 - 0x0080)
class UShouldSwitchBiped_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Target;                                                   // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      LastKnownLocation;                                        // 0x00A8(0x0028) (Edit, BlueprintVisible)
	float                                              DistanceBeforeBiped;                                      // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShouldSwitchBiped.ShouldSwitchBiped_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ReceiveActivation(class AActor** OwnerActor);
	void ExecuteUbergraph_ShouldSwitchBiped(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
