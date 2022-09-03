#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RagdollKinematicActor_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RagdollKinematicActor_BP.RagdollKinematicActor_BP_C
// 0x0000 (0x0478 - 0x0478)
class ARagdollKinematicActor_BP_C : public AStaticMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RagdollKinematicActor_BP.RagdollKinematicActor_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_RagdollKinematicActor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
