#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_FenceFoundation_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass FenceFoundation_Metal.FenceFoundation_Metal_C
// 0x0000 (0x0AA0 - 0x0AA0)
class AFenceFoundation_Metal_C : public AFenceFoundation_Base_New_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FenceFoundation_Metal.FenceFoundation_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_FenceFoundation_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
