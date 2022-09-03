#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekTransmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C
// 0x0001 (0x0591 - 0x0590)
class UPrimalInventoryBP_TekTransmitter_C : public UPrimalInventoryBP_BaseGasolineBurning_C
{
public:
	bool                                               Requires_Engram;                                          // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekTransmitter.PrimalInventoryBP_TekTransmitter_C");
		return ptr;
	}


	bool BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC);
	void ExecuteUbergraph_PrimalInventoryBP_TekTransmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
