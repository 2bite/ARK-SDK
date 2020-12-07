#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_PreventFreezing_Cherufe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_PreventFreezing_Cherufe.Buff_PreventFreezing_Cherufe_C
// 0x0000 (0x0950 - 0x0950)
class ABuff_PreventFreezing_Cherufe_C : public ABuff_PreventFreezing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_PreventFreezing_Cherufe.Buff_PreventFreezing_Cherufe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_PreventFreezing_Cherufe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
