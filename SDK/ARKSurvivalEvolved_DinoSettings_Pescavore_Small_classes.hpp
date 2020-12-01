#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Pescavore_Small_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Pescavore_Small.DinoSettings_Pescavore_Small_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Pescavore_Small_C : public UDinoSettings_Pescavore_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Pescavore_Small.DinoSettings_Pescavore_Small_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Pescavore_Small(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
