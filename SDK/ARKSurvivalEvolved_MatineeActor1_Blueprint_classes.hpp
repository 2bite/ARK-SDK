#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MatineeActor1_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MatineeActor1_Blueprint.MatineeActor1_Blueprint_C
// 0x0000 (0x04D8 - 0x04D8)
class AMatineeActor1_Blueprint_C : public AMatineeActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MatineeActor1_Blueprint.MatineeActor1_Blueprint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MatineeActor1_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif