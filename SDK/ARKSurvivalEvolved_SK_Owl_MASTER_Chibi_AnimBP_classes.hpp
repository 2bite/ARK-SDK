#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SK_Owl_MASTER_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass SK_Owl_MASTER_Chibi_AnimBP.SK_Owl_MASTER_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class USK_Owl_MASTER_Chibi_AnimBP_C : public UWyvern_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass SK_Owl_MASTER_Chibi_AnimBP.SK_Owl_MASTER_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_SK_Owl_MASTER_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
