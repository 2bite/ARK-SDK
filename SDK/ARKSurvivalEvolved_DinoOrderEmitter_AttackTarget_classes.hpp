#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoOrderEmitter_AttackTarget_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoOrderEmitter_AttackTarget.DinoOrderEmitter_AttackTarget_C
// 0x0000 (0x0510 - 0x0510)
class ADinoOrderEmitter_AttackTarget_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoOrderEmitter_AttackTarget.DinoOrderEmitter_AttackTarget_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DinoOrderEmitter_AttackTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
