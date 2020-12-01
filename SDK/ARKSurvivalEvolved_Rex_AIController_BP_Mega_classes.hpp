#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rex_AIController_BP_Mega_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C
// 0x0000 (0x08E9 - 0x08E9)
class ARex_AIController_BP_Mega_C : public ARex_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Rex_AIController_BP_Mega.Rex_AIController_BP_Mega_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Rex_AIController_BP_Mega(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
