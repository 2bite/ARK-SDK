#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SM_AdobeGateDoor_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_AdobeGateDoor_BP.SM_AdobeGateDoor_BP_C
// 0x0000 (0x0B58 - 0x0B58)
class ASM_AdobeGateDoor_BP_C : public AGate_Metal_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_AdobeGateDoor_BP.SM_AdobeGateDoor_BP_C");
		return ptr;
	}


	void STATIC_UserConstructionScript();
	void ExecuteUbergraph_SM_AdobeGateDoor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
