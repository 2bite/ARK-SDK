#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_AlphaRaptorAoE_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_AlphaRaptorAoE.Buff_AlphaRaptorAoE_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_AlphaRaptorAoE_C : public ABuff_AlphaBase_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_AlphaRaptorAoE.Buff_AlphaRaptorAoE_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_AlphaRaptorAoE(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
