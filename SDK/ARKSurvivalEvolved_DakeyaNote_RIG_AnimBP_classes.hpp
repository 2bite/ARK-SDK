#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DakeyaNote_RIG_AnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DakeyaNote_RIG_AnimBP.DakeyaNote_RIG_AnimBP_C
// 0x0000 (0x04E9 - 0x04E9)
class UDakeyaNote_RIG_AnimBP_C : public UBaseNoteMeshAnimBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DakeyaNote_RIG_AnimBP.DakeyaNote_RIG_AnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_DakeyaNote_RIG_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
