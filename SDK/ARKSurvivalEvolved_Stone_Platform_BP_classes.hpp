#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stone_Platform_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Stone_Platform_BP.Stone_Platform_BP_C
// 0x0000 (0x0AF8 - 0x0AF8)
class AStone_Platform_BP_C : public ACliffPlatform_Base_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Stone_Platform_BP.Stone_Platform_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Stone_Platform_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
