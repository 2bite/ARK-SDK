#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekEmitter_SwarmExplosion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C
// 0x0000 (0x0518 - 0x0518)
class AMekEmitter_SwarmExplosion_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MekEmitter_SwarmExplosion.MekEmitter_SwarmExplosion_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MekEmitter_SwarmExplosion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
