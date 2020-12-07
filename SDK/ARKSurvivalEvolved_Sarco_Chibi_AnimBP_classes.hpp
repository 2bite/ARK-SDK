#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sarco_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Sarco_Chibi_AnimBP.Sarco_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class USarco_Chibi_AnimBP_C : public URex_New_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Sarco_Chibi_AnimBP.Sarco_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Sarco_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
