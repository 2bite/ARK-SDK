#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_FenceSupport_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_FenceSupport_Tek.BP_FenceSupport_Tek_C
// 0x0000 (0x0AB0 - 0x0AB0)
class ABP_FenceSupport_Tek_C : public ABase_FenceSupport_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FenceSupport_Tek.BP_FenceSupport_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_FenceSupport_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif