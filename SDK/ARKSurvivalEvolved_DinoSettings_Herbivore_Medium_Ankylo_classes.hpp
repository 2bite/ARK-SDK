#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Medium_Ankylo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Herbivore_Medium_Ankylo.DinoSettings_Herbivore_Medium_Ankylo_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Herbivore_Medium_Ankylo_C : public UDinoSettings_Herbivore_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Medium_Ankylo.DinoSettings_Herbivore_Medium_Ankylo_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Herbivore_Medium_Ankylo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
