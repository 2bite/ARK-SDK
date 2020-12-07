#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Small_Moth_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Herbivore_Small_Moth.DinoSettings_Herbivore_Small_Moth_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Herbivore_Small_Moth_C : public UDinoSettings_Herbivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Small_Moth.DinoSettings_Herbivore_Small_Moth_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Herbivore_Small_Moth(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
