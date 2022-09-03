#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TekExplosionEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TekExplosionEmitter.TekExplosionEmitter_C
// 0x0000 (0x0518 - 0x0518)
class ATekExplosionEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TekExplosionEmitter.TekExplosionEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_TekExplosionEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
