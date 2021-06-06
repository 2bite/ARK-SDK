#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Insectivore_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Insectivore.DinoSettings_Insectivore_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Insectivore_C : public UDinoSettings_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Insectivore.DinoSettings_Insectivore_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Insectivore(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
