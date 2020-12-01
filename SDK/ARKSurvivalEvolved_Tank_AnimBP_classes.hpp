#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tank_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Tank_AnimBP.Tank_AnimBP_C
// 0x0000 (0x169C - 0x169C)
class UTank_AnimBP_C : public UDinoBlueprintBase_RootBoneName_DynamicAnimOverride_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Tank_AnimBP.Tank_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Tank_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
