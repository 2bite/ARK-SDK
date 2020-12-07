#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MekEmitter_SiegeImpact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MekEmitter_SiegeImpact.MekEmitter_SiegeImpact_C
// 0x0000 (0x0518 - 0x0518)
class AMekEmitter_SiegeImpact_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MekEmitter_SiegeImpact.MekEmitter_SiegeImpact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MekEmitter_SiegeImpact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
