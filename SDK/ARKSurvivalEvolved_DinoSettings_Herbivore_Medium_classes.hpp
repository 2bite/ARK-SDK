#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Medium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Herbivore_Medium.DinoSettings_Herbivore_Medium_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Herbivore_Medium_C : public UDinoSettings_Herbivore_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Medium.DinoSettings_Herbivore_Medium_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Herbivore_Medium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
