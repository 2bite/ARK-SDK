#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Pescavore_Small_Pela_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Pescavore_Small_Pela.DinoSettings_Pescavore_Small_Pela_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Pescavore_Small_Pela_C : public UDinoSettings_Pescavore_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Pescavore_Small_Pela.DinoSettings_Pescavore_Small_Pela_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Pescavore_Small_Pela(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
