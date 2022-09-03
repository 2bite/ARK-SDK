#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_QueenBee_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass QueenBee_Chibi_AnimBP.QueenBee_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UQueenBee_Chibi_AnimBP_C : public UWyvern_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass QueenBee_Chibi_AnimBP.QueenBee_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_QueenBee_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
