#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Beaver-Anim-Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Beaver-Anim-Blueprint.Beaver-Anim-Blueprint_C
// 0x0000 (0x1630 - 0x1630)
class UBeaver_Anim_Blueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Beaver-Anim-Blueprint.Beaver-Anim-Blueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Beaver_Anim_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
