#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AlphaBase.Buff_AlphaBase_C
// 0x0000 (0x0960 - 0x0960)
class ABuff_AlphaBase_C : public APrimalBuff
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AlphaBase.Buff_AlphaBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AlphaBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
