#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dilo_Chibi_AminBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Dilo_Chibi_AminBP.Dilo_Chibi_AminBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UDilo_Chibi_AminBP_C : public URaptor_new_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Dilo_Chibi_AminBP.Dilo_Chibi_AminBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Dilo_Chibi_AminBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
