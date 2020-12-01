#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Frozen_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Frozen.Buff_Frozen_C
// 0x0000 (0x0930 - 0x0930)
class ABuff_Frozen_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Frozen.Buff_Frozen_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Frozen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
