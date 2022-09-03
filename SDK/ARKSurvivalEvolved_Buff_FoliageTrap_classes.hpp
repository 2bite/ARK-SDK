#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FoliageTrap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FoliageTrap.Buff_FoliageTrap_C
// 0x0078 (0x0A2C - 0x09B4)
class ABuff_FoliageTrap_C : public ABuff_BiomeApplied_C
{
public:
	float                                              MaxTrapRadius;                                            // 0x09B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<double>                                     TrapActivationCooldownTimestamps;                         // 0x09B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TrapRadiuses;                                             // 0x09C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              TrapHarvestComponentClasses;                              // 0x09D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UClass*>                              TrapBuffs;                                                // 0x09E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<float>                                      TrapCooldownIntervals;                                    // 0x09F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FVector>                             TrapActivationCooldownLocations;                          // 0x0A08(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	float                                              MaxTrapCooldownInterval;                                  // 0x0A18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ENetworkModeResult>                    CallFunc_CanRunCosmeticEvents_OutNetworkMode;             // 0x0A1C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_SwitchEnum_CmpSuccess;                             // 0x0A1D(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0A1E(0x0002) MISSED OFFSET
	struct FVector                                     K2Node_CustomEvent_Location;                              // 0x0A20(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FoliageTrap.Buff_FoliageTrap_C");
		return ptr;
	}


	void GetTrapCooldownAtLocation(const struct FVector& AtLocation, double* CooldownAtLocation, int* LocationIndex);
	void CullCooldowns();
	void ReceiveBeginPlay();
	void STATIC_CheckFoliageForTrap(class UClass* HarvestComponentClass, struct FVector* AtLoc, struct FVector* TheInstigatorLoc);
	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void MultiPlayPoisonMushroomSound(const struct FVector& Location);
	void ExecuteUbergraph_Buff_FoliageTrap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
