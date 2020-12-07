#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Window_Wood_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Window_Wood_BP.Window_Wood_BP_C
// 0x0000 (0x0B48 - 0x0B48)
class AWindow_Wood_BP_C : public ADoor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Window_Wood_BP.Window_Wood_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Window_Wood_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
