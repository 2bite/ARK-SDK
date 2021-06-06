#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TrikeAnimBlueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TrikeAnimBlueprint.TrikeAnimBlueprint_C
// 0x0000 (0x1899 - 0x1899)
class UTrikeAnimBlueprint_C : public UDinoBlueprintBase_RootBoneName_Ramming_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TrikeAnimBlueprint.TrikeAnimBlueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_TrikeAnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
