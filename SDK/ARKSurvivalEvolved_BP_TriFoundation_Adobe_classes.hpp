#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriFoundation_Adobe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TriFoundation_Adobe.BP_TriFoundation_Adobe_C
// 0x0000 (0x0AFA - 0x0AFA)
class ABP_TriFoundation_Adobe_C : public ABase_Foundation_Tri_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TriFoundation_Adobe.BP_TriFoundation_Adobe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_TriFoundation_Adobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
