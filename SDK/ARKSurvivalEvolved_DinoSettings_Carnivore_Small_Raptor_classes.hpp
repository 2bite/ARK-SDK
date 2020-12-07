#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Small_Raptor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Carnivore_Small_Raptor.DinoSettings_Carnivore_Small_Raptor_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Carnivore_Small_Raptor_C : public UDinoSettings_Carnivore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Small_Raptor.DinoSettings_Carnivore_Small_Raptor_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Carnivore_Small_Raptor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
