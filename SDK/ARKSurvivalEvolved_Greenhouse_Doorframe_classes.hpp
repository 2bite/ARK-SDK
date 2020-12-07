#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Greenhouse_Doorframe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Greenhouse_Doorframe.Greenhouse_Doorframe_C
// 0x0000 (0x0AD0 - 0x0AD0)
class AGreenhouse_Doorframe_C : public ADoorframe_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Greenhouse_Doorframe.Greenhouse_Doorframe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Greenhouse_Doorframe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
