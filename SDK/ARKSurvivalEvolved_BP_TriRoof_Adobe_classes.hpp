#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_TriRoof_Adobe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_TriRoof_Adobe.BP_TriRoof_Adobe_C
// 0x0000 (0x0AE9 - 0x0AE9)
class ABP_TriRoof_Adobe_C : public ABase_Roof_Tri_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TriRoof_Adobe.BP_TriRoof_Adobe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_TriRoof_Adobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
