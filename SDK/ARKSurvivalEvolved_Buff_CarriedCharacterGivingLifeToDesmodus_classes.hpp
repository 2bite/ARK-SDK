#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_CarriedCharacterGivingLifeToDesmodus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_CarriedCharacterGivingLifeToDesmodus.Buff_CarriedCharacterGivingLifeToDesmodus_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_CarriedCharacterGivingLifeToDesmodus_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_CarriedCharacterGivingLifeToDesmodus.Buff_CarriedCharacterGivingLifeToDesmodus_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_CarriedCharacterGivingLifeToDesmodus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif