#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Anklyo-Anim-Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anklyo-Anim-Blueprint.Anklyo-Anim-Blueprint_C
// 0x0000 (0x1630 - 0x1630)
class UAnklyo_Anim_Blueprint_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anklyo-Anim-Blueprint.Anklyo-Anim-Blueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Anklyo_Anim_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
