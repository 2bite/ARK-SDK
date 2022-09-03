#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Huge_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Carnivore_Huge.DinoSettings_Carnivore_Huge_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Carnivore_Huge_C : public UDinoSettings_Carnivore_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Huge.DinoSettings_Carnivore_Huge_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Carnivore_Huge(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
