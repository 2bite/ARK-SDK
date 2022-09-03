#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DestroyedMeshBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DestroyedMeshBase.DestroyedMeshBase_C
// 0x0000 (0x04A0 - 0x04A0)
class ADestroyedMeshBase_C : public ADestroyedMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DestroyedMeshBase.DestroyedMeshBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DestroyedMeshBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
