#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Lamprey_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitter_Lamprey.Buff_ChargeEmitter_Lamprey_C
// 0x0000 (0x0B68 - 0x0B68)
class ABuff_ChargeEmitter_Lamprey_C : public ABuff_ChargeEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_Lamprey.Buff_ChargeEmitter_Lamprey_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitter_Lamprey(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
