#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_UpdateTargetZiplineAndLocation_SRV_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C
// 0x00D0 (0x0150 - 0x0080)
class UCaveWolf_UpdateTargetZiplineAndLocation_SRV_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetLastZiplineLocationKey;                             // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetLastZiplineUsedKey;                                 // 0x00A8(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      CurrentZipline;                                           // 0x00D0(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      TargetCurrentZipline;                                     // 0x00F8(0x0028) (Edit, BlueprintVisible)
	class APrimalBuff*                                 TargetBuff;                                               // 0x0120(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FBlackboardKeySelector                      OrderedMoveToLocationKey;                                 // 0x0128(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CaveWolf_UpdateTargetZiplineAndLocation_SRV.CaveWolf_UpdateTargetZiplineAndLocation_SRV_C");
		return ptr;
	}


	void ReceiveActivation(class AActor** OwnerActor);
	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_CaveWolf_UpdateTargetZiplineAndLocation_SRV(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
