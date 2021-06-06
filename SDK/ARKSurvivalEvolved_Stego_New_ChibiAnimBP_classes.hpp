#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Stego_New_ChibiAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Stego_New_ChibiAnimBP.Stego_New_ChibiAnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UStego_New_ChibiAnimBP_C : public URaptor_new_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Stego_New_ChibiAnimBP.Stego_New_ChibiAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Stego_New_ChibiAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
