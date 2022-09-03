#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_Fjordhawk_UpdateLootTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C
// 0x00C8 (0x0148 - 0x0080)
class UService_Fjordhawk_UpdateLootTarget_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      OnFlyKey;                                                 // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      OnLandKey;                                                // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetPointKey;                                           // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      NavActorKey;                                              // 0x00F8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RangeKey;                                                 // 0x0120(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Service_Fjordhawk_UpdateLootTarget.Service_Fjordhawk_UpdateLootTarget_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Service_Fjordhawk_UpdateLootTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
