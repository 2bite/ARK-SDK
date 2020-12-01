#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_CityTerminal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitterStructure_CityTerminal.Buff_ChargeEmitterStructure_CityTerminal_C
// 0x0000 (0x0AC0 - 0x0AC0)
class ABuff_ChargeEmitterStructure_CityTerminal_C : public ABuff_ChargeEmitterStructure_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterStructure_CityTerminal.Buff_ChargeEmitterStructure_CityTerminal_C");
		return ptr;
	}


	void ShouldEnableTimers(bool* tickServer, bool* TickClient);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitterStructure_CityTerminal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
