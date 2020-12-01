#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Omnivore_Medium_Megatherium_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Omnivore_Medium_Megatherium.DinoSettings_Omnivore_Medium_Megatherium_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Omnivore_Medium_Megatherium_C : public UDinoSettings_Carnivore_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Omnivore_Medium_Megatherium.DinoSettings_Omnivore_Medium_Megatherium_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Omnivore_Medium_Megatherium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
