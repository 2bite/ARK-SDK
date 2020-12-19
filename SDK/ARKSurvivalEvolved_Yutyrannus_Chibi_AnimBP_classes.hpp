#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Yutyrannus_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Yutyrannus_Chibi_AnimBP.Yutyrannus_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UYutyrannus_Chibi_AnimBP_C : public UWyvern_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Yutyrannus_Chibi_AnimBP.Yutyrannus_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Yutyrannus_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
