#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpearImpactBreakEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpearImpactBreakEmitter.SpearImpactBreakEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ASpearImpactBreakEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpearImpactBreakEmitter.SpearImpactBreakEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpearImpactBreakEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
