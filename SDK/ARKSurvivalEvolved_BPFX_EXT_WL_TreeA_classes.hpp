#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BPFX_EXT_WL_TreeA_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C
// 0x0000 (0x0830 - 0x0830)
class UBPFX_EXT_WL_TreeA_C : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPFX_EXT_WL_TreeA.BPFX_EXT_WL_TreeA_C");
		return ptr;
	}


	void ExecuteUbergraph_BPFX_EXT_WL_TreeA(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
