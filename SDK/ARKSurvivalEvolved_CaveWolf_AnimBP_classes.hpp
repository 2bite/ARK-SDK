#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass CaveWolf_AnimBP.CaveWolf_AnimBP_C
// 0x0000 (0x1EB0 - 0x1EB0)
class UCaveWolf_AnimBP_C : public UDinoBlueprintBase_RootBoneName_ZipLine_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass CaveWolf_AnimBP.CaveWolf_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_CaveWolf_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
