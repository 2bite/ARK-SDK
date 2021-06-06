#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TentacleToss_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TentacleToss.Buff_TentacleToss_C
// 0x0010 (0x0970 - 0x0960)
class ABuff_TentacleToss_C : public APrimalBuff
{
public:
	float                                              ThrowStrength;                                            // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     PrevActorLocation;                                        // 0x0964(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TentacleToss.Buff_TentacleToss_C");
		return ptr;
	}


	bool AllowPostProcessEffect();
	void BPDeactivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TentacleToss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
