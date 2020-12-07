#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Large_Mek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Omnivore_Large_Mek.DinoSettings_Omnivore_Large_Mek_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Omnivore_Large_Mek_C : public UDinoSettings_Carnivore_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Omnivore_Large_Mek.DinoSettings_Omnivore_Large_Mek_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Omnivore_Large_Mek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
