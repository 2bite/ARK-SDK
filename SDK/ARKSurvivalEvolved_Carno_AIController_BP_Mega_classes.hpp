#pragma once

// ARKSurvivalEvolved (318.14) SDK

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
// 0x0000 (0x0919 - 0x0919)
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
