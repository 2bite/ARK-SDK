#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_NamelessPreggers_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_NamelessPreggers_Gen2.Buff_NamelessPreggers_Gen2_C
// 0x0000 (0x0B28 - 0x0B28)
class ABuff_NamelessPreggers_Gen2_C : public ABuff_NamelessPreggers_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_NamelessPreggers_Gen2.Buff_NamelessPreggers_Gen2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_NamelessPreggers_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
