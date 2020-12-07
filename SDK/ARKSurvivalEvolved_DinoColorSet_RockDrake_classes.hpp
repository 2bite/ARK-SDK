#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_RockDrake_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoColorSet_RockDrake.DinoColorSet_RockDrake_C
// 0x0000 (0x0268 - 0x0268)
class UDinoColorSet_RockDrake_C : public UPrimalColorSet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoColorSet_RockDrake.DinoColorSet_RockDrake_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoColorSet_RockDrake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
