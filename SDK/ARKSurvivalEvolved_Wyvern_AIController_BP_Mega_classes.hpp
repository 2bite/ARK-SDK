#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wyvern_AIController_BP_Mega_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wyvern_AIController_BP_Mega.Wyvern_AIController_BP_Mega_C
// 0x0000 (0x0919 - 0x0919)
class AWyvern_AIController_BP_Mega_C : public AWyvern_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wyvern_AIController_BP_Mega.Wyvern_AIController_BP_Mega_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wyvern_AIController_BP_Mega(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
