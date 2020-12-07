#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjHarpoon_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjHarpoon.ProjHarpoon_C
// 0x0024 (0x06AC - 0x0688)
class AProjHarpoon_C : public APrimalProjectileArrow
{
public:
	class UChildActorComponent*                        ChildProjectileTrail;                                     // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UnderwaterGravityScale;                                   // 0x0690(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutOfWaterGravityScale;                                   // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UnderwaterMaxSpeed;                                       // 0x0698(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OutOfWaterMaxSpeed;                                       // 0x069C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DamageOutOfWater;                                         // 0x06A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DamageUnderwater;                                         // 0x06A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              damageMult;                                               // 0x06A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjHarpoon.ProjHarpoon_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void UserConstructionScript();
	void ExecuteUbergraph_ProjHarpoon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
