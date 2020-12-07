#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegalosaurusAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass MegalosaurusAnimBlueprint.MegalosaurusAnimBlueprint_C
// 0x0000 (0x1630 - 0x1630)
class UMegalosaurusAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MegalosaurusAnimBlueprint.MegalosaurusAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_MegalosaurusAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
