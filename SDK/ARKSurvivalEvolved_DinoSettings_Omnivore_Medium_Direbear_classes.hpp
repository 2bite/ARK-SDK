#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Medium_Direbear_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Omnivore_Medium_Direbear.DinoSettings_Omnivore_Medium_Direbear_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Omnivore_Medium_Direbear_C : public UDinoSettings_Carnivore_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Omnivore_Medium_Direbear.DinoSettings_Omnivore_Medium_Direbear_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Omnivore_Medium_Direbear(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
