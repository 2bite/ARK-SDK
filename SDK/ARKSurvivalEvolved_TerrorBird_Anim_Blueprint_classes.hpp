#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_TerrorBird_Anim_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass TerrorBird_Anim_Blueprint.TerrorBird_Anim_Blueprint_C
// 0x0000 (0x1630 - 0x1630)
class UTerrorBird_Anim_Blueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TerrorBird_Anim_Blueprint.TerrorBird_Anim_Blueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_TerrorBird_Anim_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
