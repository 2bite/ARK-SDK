#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_ProtoArkDome_Desert_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ProtoArkDome_Desert.BP_ProtoArkDome_Desert_C
// 0x0000 (0x0ACC - 0x0ACC)
class ABP_ProtoArkDome_Desert_C : public ABP_ProtoArkDome_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ProtoArkDome_Desert.BP_ProtoArkDome_Desert_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_ProtoArkDome_Desert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
