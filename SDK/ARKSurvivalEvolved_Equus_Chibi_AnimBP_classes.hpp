#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Equus_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Equus_Chibi_AnimBP.Equus_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UEquus_Chibi_AnimBP_C : public UWyvern_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Equus_Chibi_AnimBP.Equus_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Equus_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
