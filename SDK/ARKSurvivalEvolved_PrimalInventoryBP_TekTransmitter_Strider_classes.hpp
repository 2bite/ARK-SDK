#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalInventoryBP_TekTransmitter_Strider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalInventoryBP_TekTransmitter_Strider.PrimalInventoryBP_TekTransmitter_Strider_C
// 0x0000 (0x0590 - 0x0590)
class UPrimalInventoryBP_TekTransmitter_Strider_C : public UPrimalInventoryBP_TekTransmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalInventoryBP_TekTransmitter_Strider.PrimalInventoryBP_TekTransmitter_Strider_C");
		return ptr;
	}


	bool BPRemoteInventoryAllowViewing(class AShooterPlayerController** PC);
	void ExecuteUbergraph_PrimalInventoryBP_TekTransmitter_Strider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
