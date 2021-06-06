#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Herbivore_Tiny_Jerboa_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Herbivore_Tiny_Jerboa.DinoSettings_Herbivore_Tiny_Jerboa_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Herbivore_Tiny_Jerboa_C : public UDinoSettings_Herbivore_Tiny_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Herbivore_Tiny_Jerboa.DinoSettings_Herbivore_Tiny_Jerboa_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Herbivore_Tiny_Jerboa(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
