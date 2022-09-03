#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClub_TurkeyLeg_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C
// 0x0000 (0x0D88 - 0x0D88)
class AWeapStoneClub_TurkeyLeg_C : public AWeapStoneClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClub_TurkeyLeg.WeapStoneClub_TurkeyLeg_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStoneClub_TurkeyLeg(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
