#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriFoundation_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TriFoundation_Stone.BP_TriFoundation_Stone_C
// 0x0000 (0x0AD2 - 0x0AD2)
class ABP_TriFoundation_Stone_C : public ABase_Foundation_Tri_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TriFoundation_Stone.BP_TriFoundation_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_TriFoundation_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
