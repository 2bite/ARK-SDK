#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carnivore_Huge_Plesio_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Carnivore_Huge_Plesio.DinoSettings_Carnivore_Huge_Plesio_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Carnivore_Huge_Plesio_C : public UDinoSettings_Carnivore_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carnivore_Huge_Plesio.DinoSettings_Carnivore_Huge_Plesio_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Carnivore_Huge_Plesio(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
