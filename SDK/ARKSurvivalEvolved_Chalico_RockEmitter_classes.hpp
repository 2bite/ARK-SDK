#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Chalico_RockEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Chalico_RockEmitter.Chalico_RockEmitter_C
// 0x0000 (0x0500 - 0x0500)
class AChalico_RockEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Chalico_RockEmitter.Chalico_RockEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Chalico_RockEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif