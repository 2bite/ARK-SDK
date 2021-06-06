#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitterStructure_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitterStructure.Buff_ChargeEmitterStructure_C
// 0x0008 (0x0B80 - 0x0B78)
class ABuff_ChargeEmitterStructure_C : public ABuff_ChargeEmitter_C
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B78(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitterStructure.Buff_ChargeEmitterStructure_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitterStructure(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
