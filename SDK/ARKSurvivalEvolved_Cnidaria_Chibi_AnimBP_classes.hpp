#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Cnidaria_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Cnidaria_Chibi_AnimBP.Cnidaria_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UCnidaria_Chibi_AnimBP_C : public UWyvern_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Cnidaria_Chibi_AnimBP.Cnidaria_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Cnidaria_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
