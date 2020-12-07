#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dimorph_AIController_BP_Aggressive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dimorph_AIController_BP_Aggressive.Dimorph_AIController_BP_Aggressive_C
// 0x0000 (0x0919 - 0x0919)
class ADimorph_AIController_BP_Aggressive_C : public ADimorph_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dimorph_AIController_BP_Aggressive.Dimorph_AIController_BP_Aggressive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dimorph_AIController_BP_Aggressive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
