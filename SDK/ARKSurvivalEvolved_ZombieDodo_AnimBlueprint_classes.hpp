#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ZombieDodo_AnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ZombieDodo_AnimBlueprint.ZombieDodo_AnimBlueprint_C
// 0x0000 (0x1630 - 0x1630)
class UZombieDodo_AnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ZombieDodo_AnimBlueprint.ZombieDodo_AnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_ZombieDodo_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
