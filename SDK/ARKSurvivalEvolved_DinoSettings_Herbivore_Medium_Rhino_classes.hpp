#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Medium_Rhino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Herbivore_Medium_Rhino.DinoSettings_Herbivore_Medium_Rhino_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Herbivore_Medium_Rhino_C : public UDinoSettings_Herbivore_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Medium_Rhino.DinoSettings_Herbivore_Medium_Rhino_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Herbivore_Medium_Rhino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
