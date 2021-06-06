#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Spindles_Chibi_animBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Spindles_Chibi_animBP.Spindles_Chibi_animBP_C
// 0x0000 (0x06C8 - 0x06C8)
class USpindles_Chibi_animBP_C : public URex_New_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Spindles_Chibi_animBP.Spindles_Chibi_animBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Spindles_Chibi_animBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
