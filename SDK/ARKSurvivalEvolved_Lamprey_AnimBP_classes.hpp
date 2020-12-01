#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Lamprey_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Lamprey_AnimBP.Lamprey_AnimBP_C
// 0x0000 (0x16BC - 0x16BC)
class ULamprey_AnimBP_C : public UDinoBlueprintBase_RootBoneName_Swimmer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Lamprey_AnimBP.Lamprey_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Lamprey_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
