#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Huge_Rex_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Carnivore_Huge_Rex.DinoSettings_Carnivore_Huge_Rex_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Carnivore_Huge_Rex_C : public UDinoSettings_Carnivore_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Huge_Rex.DinoSettings_Carnivore_Huge_Rex_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Carnivore_Huge_Rex(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
