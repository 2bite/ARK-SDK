#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Endboss_Throne_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Endboss_Throne_AnimBP.Endboss_Throne_AnimBP_C
// 0x0000 (0x1630 - 0x1630)
class UEndboss_Throne_AnimBP_C : public UDinoBlueprintBase_RootBoneName_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Endboss_Throne_AnimBP.Endboss_Throne_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Endboss_Throne_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
