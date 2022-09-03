#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekShield_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_TekShield_C : public UPrimalInventoryBP_BaseGasolineBurning_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekShield.PrimalInventoryBP_TekShield_C");
		return ptr;
	}


	bool BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC);
	void ExecuteUbergraph_PrimalInventoryBP_TekShield(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
