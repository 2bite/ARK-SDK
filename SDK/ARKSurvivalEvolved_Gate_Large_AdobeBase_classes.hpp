#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Gate_Large_AdobeBase_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Gate_Large_AdobeBase.Gate_Large_AdobeBase_C
// 0x0000 (0x0B70 - 0x0B70)
class AGate_Large_AdobeBase_C : public ADoor_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gate_Large_AdobeBase.Gate_Large_AdobeBase_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Gate_Large_AdobeBase(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
