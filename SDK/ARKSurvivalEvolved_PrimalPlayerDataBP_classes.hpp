#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalPlayerDataBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalPlayerDataBP.PrimalPlayerDataBP_C
// 0x0000 (0x04A4 - 0x04A4)
class UPrimalPlayerDataBP_C : public UPrimalPlayerDataBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalPlayerDataBP.PrimalPlayerDataBP_C");
		return ptr;
	}


	void BPAppliedToPlayerState(class AShooterPlayerState** ForPlayerState);
	void BPApplyToPlayerCharacter(class AShooterPlayerState** ForPlayerState, class AShooterCharacter** NewPlayerCharacter);
	void ExecuteUbergraph_PrimalPlayerDataBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
