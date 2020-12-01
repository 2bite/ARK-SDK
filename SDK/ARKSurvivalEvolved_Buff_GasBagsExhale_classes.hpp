#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_GasBagsExhale_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_GasBagsExhale.Buff_GasBagsExhale_C
// 0x0018 (0x08B8 - 0x08A0)
class ABuff_GasBagsExhale_C : public ABuff_Base_C
{
public:
	struct FVector                                     LaunchDirection;                                          // 0x08A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Strength;                                                 // 0x08AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	double                                             LaunchTime;                                               // 0x08B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_GasBagsExhale.Buff_GasBagsExhale_C");
		return ptr;
	}


	void BPOnInstigatorMovementModeChangedNotify(TEnumAsByte<EMovementMode>* PrevMovementMode, unsigned char* PreviousCustomMode, TEnumAsByte<EMovementMode>* newMovementMode, unsigned char* newCustomMode);
	void BuffTickServer(float* DeltaTime);
	void SetupExhale(const struct FVector& Direction, float Strength);
	void BPActivated(class AActor** ForInstigator);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_GasBagsExhale(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif