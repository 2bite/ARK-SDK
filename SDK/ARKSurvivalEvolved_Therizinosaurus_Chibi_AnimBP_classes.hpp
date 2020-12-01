#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Therizinosaurus_Chibi_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Therizinosaurus_Chibi_AnimBP.Therizinosaurus_Chibi_AnimBP_C
// 0x0000 (0x06C8 - 0x06C8)
class UTherizinosaurus_Chibi_AnimBP_C : public UWyvern_Chibi_AnimBP_BASE_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Therizinosaurus_Chibi_AnimBP.Therizinosaurus_Chibi_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_Therizinosaurus_Chibi_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
