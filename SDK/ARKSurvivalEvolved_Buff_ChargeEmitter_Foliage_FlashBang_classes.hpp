#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ChargeEmitter_Foliage_FlashBang_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C
// 0x0000 (0x0AC0 - 0x0AC0)
class ABuff_ChargeEmitter_Foliage_FlashBang_C : public ABuff_ChargeEmitter_Foliage_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ChargeEmitter_Foliage_FlashBang.Buff_ChargeEmitter_Foliage_FlashBang_C");
		return ptr;
	}


	void GetActorsToIgnoreOnRaycast(class AActor** emitterActor, TArray<class AActor*>* ActorsToIgnore);
	void CanEmitCharge(bool* canEmit);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ChargeEmitter_Foliage_FlashBang(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
