#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_IslandWaterPlane_Lakes_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_IslandWaterPlane_Lakes.BP_IslandWaterPlane_Lakes_C
// 0x0000 (0x04F0 - 0x04F0)
class ABP_IslandWaterPlane_Lakes_C : public ABP_IslandWaterPlane_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_IslandWaterPlane_Lakes.BP_IslandWaterPlane_Lakes_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_IslandWaterPlane_Lakes(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
