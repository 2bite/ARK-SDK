#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MissionModule_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MissionModule_Base.MissionModule_Base_C
// 0x0000 (0x00A8 - 0x00A8)
class UMissionModule_Base_C : public UNewMissionModuleBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MissionModule_Base.MissionModule_Base_C");
		return ptr;
	}


	void ExecuteUbergraph_MissionModule_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
