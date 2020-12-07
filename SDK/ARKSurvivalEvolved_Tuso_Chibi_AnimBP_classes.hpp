#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Tuso_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Tuso_Chibi_AnimBP.Tuso_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UTuso_Chibi_AnimBP_C : public UWyvern_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Tuso_Chibi_AnimBP.Tuso_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Tuso_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
