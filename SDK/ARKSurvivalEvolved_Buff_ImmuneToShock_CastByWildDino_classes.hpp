#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_ImmuneToShock_CastByWildDino_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_ImmuneToShock_CastByWildDino_C : public ABuff_ImmuneToShock_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_ImmuneToShock_CastByWildDino.Buff_ImmuneToShock_CastByWildDino_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_ImmuneToShock_CastByWildDino(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
