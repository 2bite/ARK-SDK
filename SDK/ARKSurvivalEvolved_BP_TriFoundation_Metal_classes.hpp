#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriFoundation_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TriFoundation_Metal.BP_TriFoundation_Metal_C
// 0x0000 (0x0AFA - 0x0AFA)
class ABP_TriFoundation_Metal_C : public ABase_Foundation_Tri_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TriFoundation_Metal.BP_TriFoundation_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_TriFoundation_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
