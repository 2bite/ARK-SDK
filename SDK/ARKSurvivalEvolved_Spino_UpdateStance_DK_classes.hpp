#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spino_UpdateStance_DK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Spino_UpdateStance_DK.Spino_UpdateStance_DK_C
// 0x0050 (0x00D0 - 0x0080)
class USpino_UpdateStance_DK_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      IsFleeingKey;                                             // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      shouldFleeKey;                                            // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Spino_UpdateStance_DK.Spino_UpdateStance_DK_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Spino_UpdateStance_DK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
