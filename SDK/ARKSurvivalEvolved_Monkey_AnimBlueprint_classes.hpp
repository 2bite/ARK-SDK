#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Monkey_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Monkey_AnimBlueprint.Monkey_AnimBlueprint_C
// 0x0000 (0x17BC - 0x17BC)
class UMonkey_AnimBlueprint_C : public UDinoBlueprintBase_MovementBlendSpace_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Monkey_AnimBlueprint.Monkey_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Monkey_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
