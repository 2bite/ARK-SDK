#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_OnFire_VentHeat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C
// 0x001C (0x0994 - 0x0978)
class ABuff_OnFire_VentHeat_C : public ABuff_OnFire_C
{
public:
	struct FVector                                     LaunchDirection;                                          // 0x0978(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Strength;                                                 // 0x0984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LaunchTime;                                               // 0x0988(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpulseMax;                                               // 0x0990(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_OnFire_VentHeat.Buff_OnFire_VentHeat_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* NewMovementMode, unsigned char* NewCustomMode);
	void SetupVentHeat(const struct FVector& Direction, float Strength);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_OnFire_VentHeat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
