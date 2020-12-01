#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FKaijuProtecting_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FKaijuProtecting.Buff_FKaijuProtecting_C
// 0x0000 (0x08A0 - 0x08A0)
class ABuff_FKaijuProtecting_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FKaijuProtecting.Buff_FKaijuProtecting_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FKaijuProtecting(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
