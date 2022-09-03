#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackState_SpaceWhale_Hyperdrive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackState_SpaceWhale_Hyperdrive.DinoAttackState_SpaceWhale_Hyperdrive_C
// 0x0000 (0x00A0 - 0x00A0)
class UDinoAttackState_SpaceWhale_Hyperdrive_C : public UPrimalAIStateBPBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackState_SpaceWhale_Hyperdrive.DinoAttackState_SpaceWhale_Hyperdrive_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoAttackState_SpaceWhale_Hyperdrive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
