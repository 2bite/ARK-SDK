#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WyvernNest_Crystal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WyvernNest_Crystal.WyvernNest_Crystal_C
// 0x0000 (0x0AF4 - 0x0AF4)
class AWyvernNest_Crystal_C : public AWyvernNest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WyvernNest_Crystal.WyvernNest_Crystal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WyvernNest_Crystal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
