#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Corrupt_Carnivore_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Corrupt_Carnivore.DinoSettings_Corrupt_Carnivore_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Corrupt_Carnivore_C : public UDinoSettings_Corrupt_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Corrupt_Carnivore.DinoSettings_Corrupt_Carnivore_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Corrupt_Carnivore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
