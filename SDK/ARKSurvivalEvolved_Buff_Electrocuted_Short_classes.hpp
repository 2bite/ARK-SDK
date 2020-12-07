#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Electrocuted_Short_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Electrocuted_Short.Buff_Electrocuted_Short_C
// 0x0000 (0x0968 - 0x0968)
class ABuff_Electrocuted_Short_C : public ABuff_Electrocuted_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Electrocuted_Short.Buff_Electrocuted_Short_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Electrocuted_Short(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
