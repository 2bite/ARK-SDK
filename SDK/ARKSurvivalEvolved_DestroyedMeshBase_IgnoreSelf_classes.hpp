#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DestroyedMeshBase_IgnoreSelf_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C
// 0x0000 (0x04A0 - 0x04A0)
class ADestroyedMeshBase_IgnoreSelf_C : public ADestroyedMeshActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DestroyedMeshBase_IgnoreSelf.DestroyedMeshBase_IgnoreSelf_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
