#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FlameThrower_OnFire_Short_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FlameThrower_OnFire_Short.Buff_FlameThrower_OnFire_Short_C
// 0x0000 (0x0970 - 0x0970)
class ABuff_FlameThrower_OnFire_Short_C : public ABuff_FlameThrower_OnFire_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FlameThrower_OnFire_Short.Buff_FlameThrower_OnFire_Short_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FlameThrower_OnFire_Short(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
