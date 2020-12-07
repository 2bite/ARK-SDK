#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Iguanodon_UpdateStance_DK_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C
// 0x0050 (0x00D0 - 0x0080)
class UIguanodon_UpdateStance_DK_C : public UBTService_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      IsFleeingKey;                                             // 0x0080(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      shouldFleeKey;                                            // 0x00A8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Iguanodon_UpdateStance_DK.Iguanodon_UpdateStance_DK_C");
		return ptr;
	}


	void ReceiveTick(class AActor** OwnerActor, float* DeltaSeconds);
	void ExecuteUbergraph_Iguanodon_UpdateStance_DK(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
