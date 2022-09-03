#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Grenade_Infested_ExplosionEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Grenade_Infested_ExplosionEmitter.Grenade_Infested_ExplosionEmitter_C
// 0x0000 (0x0518 - 0x0518)
class AGrenade_Infested_ExplosionEmitter_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Grenade_Infested_ExplosionEmitter.Grenade_Infested_ExplosionEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Grenade_Infested_ExplosionEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
