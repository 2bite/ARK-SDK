#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Bigfoot_Anim_Blueprint_Zipline_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Bigfoot_Anim_Blueprint_Zipline.Bigfoot_Anim_Blueprint_Zipline_C
// 0x0000 (0x1DF4 - 0x1DF4)
class UBigfoot_Anim_Blueprint_Zipline_C : public UDinoBlueprintBase_MovementBlendSpace_Zipline_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Bigfoot_Anim_Blueprint_Zipline.Bigfoot_Anim_Blueprint_Zipline_C");
		return ptr;
	}


	void ExecuteUbergraph_Bigfoot_Anim_Blueprint_Zipline(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
