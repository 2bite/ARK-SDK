#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekEmitter_SwarmMissile_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C
// 0x0000 (0x0518 - 0x0518)
class AMekEmitter_SwarmMissile_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MekEmitter_SwarmMissile.MekEmitter_SwarmMissile_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MekEmitter_SwarmMissile(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
