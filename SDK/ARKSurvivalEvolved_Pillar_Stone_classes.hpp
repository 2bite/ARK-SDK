#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Pillar_Stone_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pillar_Stone.Pillar_Stone_C
// 0x0000 (0x0AC0 - 0x0AC0)
class APillar_Stone_C : public APillar_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pillar_Stone.Pillar_Stone_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Pillar_Stone(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
