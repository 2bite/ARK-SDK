#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ClusterBombGroundImpact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ClusterBombGroundImpact.ClusterBombGroundImpact_C
// 0x0000 (0x0518 - 0x0518)
class AClusterBombGroundImpact_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ClusterBombGroundImpact.ClusterBombGroundImpact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ClusterBombGroundImpact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif