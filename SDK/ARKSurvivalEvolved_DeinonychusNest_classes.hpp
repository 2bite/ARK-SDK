#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DeinonychusNest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DeinonychusNest.DeinonychusNest_C
// 0x0000 (0x0ACC - 0x0ACC)
class ADeinonychusNest_C : public AWyvernNest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DeinonychusNest.DeinonychusNest_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_DeinonychusNest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
