#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Insectivore_Tiny_Archa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Insectivore_Tiny_Archa.DinoSettings_Insectivore_Tiny_Archa_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Insectivore_Tiny_Archa_C : public UDinoSettings_Insectivore_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Insectivore_Tiny_Archa.DinoSettings_Insectivore_Tiny_Archa_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Insectivore_Tiny_Archa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
