#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Phoenix_OnFire_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Phoenix_OnFire.Buff_Phoenix_OnFire_C
// 0x0000 (0x0970 - 0x0970)
class ABuff_Phoenix_OnFire_C : public ABuff_FlameThrower_OnFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Phoenix_OnFire.Buff_Phoenix_OnFire_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Phoenix_OnFire(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
