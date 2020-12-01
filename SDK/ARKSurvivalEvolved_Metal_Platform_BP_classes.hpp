#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Metal_Platform_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Metal_Platform_BP.Metal_Platform_BP_C
// 0x0000 (0x0AB0 - 0x0AB0)
class AMetal_Platform_BP_C : public ACliffPlatform_Base_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Metal_Platform_BP.Metal_Platform_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Metal_Platform_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
