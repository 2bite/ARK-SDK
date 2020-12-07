#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CherufeNest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CherufeNest.CherufeNest_C
// 0x0000 (0x0ACC - 0x0ACC)
class ACherufeNest_C : public AWyvernNest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CherufeNest.CherufeNest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_CherufeNest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
