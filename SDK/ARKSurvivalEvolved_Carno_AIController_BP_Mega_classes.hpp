#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Carno_AIController_BP_Mega_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Carno_AIController_BP_Mega.Carno_AIController_BP_Mega_C
// 0x0000 (0x0911 - 0x0911)
class ACarno_AIController_BP_Mega_C : public ACarno_AIController_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Carno_AIController_BP_Mega.Carno_AIController_BP_Mega_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Carno_AIController_BP_Mega(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
