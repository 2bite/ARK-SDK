#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DragonAttackStateEndbossFire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DragonAttackStateEndbossFire.DragonAttackStateEndBossFire_C
// 0x0000 (0x0090 - 0x0090)
class UDragonAttackStateEndBossFire_C : public UDragonAttackStateFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DragonAttackStateEndbossFire.DragonAttackStateEndBossFire_C");
		return ptr;
	}


	void ExecuteUbergraph_DragonAttackStateEndBossFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
