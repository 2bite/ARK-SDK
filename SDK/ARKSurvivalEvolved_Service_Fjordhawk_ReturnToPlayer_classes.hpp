#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Service_Fjordhawk_ReturnToPlayer_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Service_Fjordhawk_ReturnToPlayer.Service_Fjordhawk_ReturnToPlayer_C
// 0x0028 (0x00A8 - 0x0080)
class UService_Fjordhawk_ReturnToPlayer_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      NavActorKey;                                              // 0x0080(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Service_Fjordhawk_ReturnToPlayer.Service_Fjordhawk_ReturnToPlayer_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Service_Fjordhawk_ReturnToPlayer(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
