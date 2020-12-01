#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Rug_Shag_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Rug_Shag_BP.Rug_Shag_BP_C
// 0x0000 (0x0AC0 - 0x0AC0)
class ARug_Shag_BP_C : public ARug_Base_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Rug_Shag_BP.Rug_Shag_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Rug_Shag_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
