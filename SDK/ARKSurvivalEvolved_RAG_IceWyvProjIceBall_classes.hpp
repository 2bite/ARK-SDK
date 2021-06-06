#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RAG_IceWyvProjIceBall_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C
// 0x0000 (0x0660 - 0x0660)
class ARAG_IceWyvProjIceBall_C : public AShooterProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass RAG_IceWyvProjIceBall.RAG_IceWyvProjIceBall_C");
		return ptr;
	}


	struct FName GetSocketForFinalTraceCheckFromInstigatorToDirectDamageVictim();
	void UserConstructionScript();
	void ExecuteUbergraph_RAG_IceWyvProjIceBall(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
