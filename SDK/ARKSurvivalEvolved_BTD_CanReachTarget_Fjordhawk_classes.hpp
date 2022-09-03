#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BTD_CanReachTarget_Fjordhawk_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C
// 0x0050 (0x00E0 - 0x0090)
class UBTD_CanReachTarget_Fjordhawk_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      NavKey;                                                   // 0x0090(0x0028) (Edit, BlueprintVisible)
	struct FBlackboardKeySelector                      RangeKey;                                                 // 0x00B8(0x0028) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BTD_CanReachTarget_Fjordhawk.BTD_CanReachTarget_Fjordhawk_C");
		return ptr;
	}


	void IsFacing(class AActor* Actor, const struct FVector& Point, float Angle, bool* Facing);
	void ReceiveConditionCheck(class AActor** OwnerActor);
	void ExecuteUbergraph_BTD_CanReachTarget_Fjordhawk(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
