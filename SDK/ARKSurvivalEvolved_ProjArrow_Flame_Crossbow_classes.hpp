#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjArrow_Flame_Crossbow_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjArrow_Flame_Crossbow.ProjArrow_Flame_Crossbow_C
// 0x0000 (0x06A0 - 0x06A0)
class AProjArrow_Flame_Crossbow_C : public AProjArrow_Flame_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjArrow_Flame_Crossbow.ProjArrow_Flame_Crossbow_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjArrow_Flame_Crossbow(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
