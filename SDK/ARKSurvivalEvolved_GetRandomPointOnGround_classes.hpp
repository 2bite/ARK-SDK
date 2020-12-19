#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_GetRandomPointOnGround_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass GetRandomPointOnGround.GetRandomPointOnGround_C
// 0x0050 (0x00C8 - 0x0078)
class UGetRandomPointOnGround_C : public UBTTask_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      TargetPointKey;                                           // 0x0078(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      LastForcedLandKey;                                        // 0x00A0(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GetRandomPointOnGround.GetRandomPointOnGround_C");
		return ptr;
	}


	void STATIC_ReceiveExecute(class AActor** OwnerActor);
	void ExecuteUbergraph_GetRandomPointOnGround(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
