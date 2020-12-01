#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Window_Stone_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Window_Stone_BP.Window_Stone_BP_C
// 0x0000 (0x0B38 - 0x0B38)
class AWindow_Stone_BP_C : public ADoor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Window_Stone_BP.Window_Stone_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Window_Stone_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
